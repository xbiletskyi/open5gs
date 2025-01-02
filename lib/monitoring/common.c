#include "monitoring.h"

int convert_plmn_id(const void* plmn_id_void, char* output) {
    const monitoring_plmn_id_t* plmn_id = (monitoring_plmn_id_t*)plmn_id_void;
    output[0] = '0' + plmn_id->mcc1;
    output[1] = '0' + plmn_id->mcc2;
    output[2] = '0' + plmn_id->mcc3;
    output[3] = plmn_id->mnc1 == 15 ? '0' + 0 : '0' + plmn_id->mnc1;
    output[4] = '0' + plmn_id->mnc2;
    output[5] = '0' + plmn_id->mnc3;
    output[6] = '\0';
    if (plmn_id->mnc1 == 15) {
        output[3] = '0' + 0;
        return 5;
    }
    else {
        output[3] = '0' + plmn_id->mnc2;
        return 6;
    }
}

void convert_tac(uint32_t tac, char* output) {
    output[0] = (tac >> 16) & 0xFF;
    output[1] = (tac >> 8) & 0xFF;
    output[2] = tac & 0xFF;
}

UeInfo populate_ue_info(uint64_t cell_id, uint32_t tac, const void* plmn_id, char imsi[16], char imei_sv[17]) {
    UeInfo UE;
    UE.cell_id = cell_id;
    little_to_big_endian(&UE.cell_id, 64);
    convert_tac(tac, UE.tac);
    int plmn_length = convert_plmn_id(plmn_id, UE.plmn_id);
    strncpy(UE.msin, imsi + plmn_length, sizeof(UE.msin));
    strncpy(UE.imei, imei_sv, sizeof(UE.imei));
    return UE;
}

int open_sock(const char path[]){
    int sock = socket(AF_UNIX, SOCK_STREAM, 0);

    if (sock < 0) {
        syslog(LOG_ERR, "Socket creation failed: %s", strerror(errno));
        return -1;
    }

    struct sockaddr_un server_addr = {
        .sun_family = AF_UNIX,
    };
    strncpy(server_addr.sun_path, path, sizeof(server_addr.sun_path) - 1);

    if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        syslog(LOG_ERR, "Connection to the UNIX domain socket failed: %s", strerror(errno));
        close(sock);
        return -1;
    };
    return sock;
}

void little_to_big_endian(void *data, size_t num_bits) {
    if (num_bits % 8 != 0) {
        return;
    }

    size_t num_bytes = num_bits / 8;
    uint8_t *byte_data = (uint8_t *)data;
 	size_t i;
    for (i = 0; i < num_bytes / 2; i++) {
        uint8_t temp = byte_data[i];
        byte_data[i] = byte_data[num_bytes - 1 - i];
        byte_data[num_bytes - 1 - i] = temp;
    }
}
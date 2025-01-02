#ifndef MONITORING_H
#define MONITORING_H

#define MONITORING_SOCKET_PATH_UE_ATTACH "/tmp/monitoring-ue-n11-attach"

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <errno.h>
#include <syslog.h>

    typedef struct monitoring_plmn_id_s {
    uint8_t mcc1 : 4;
    uint8_t mcc2 : 4;
    uint8_t mcc3 : 4;
    uint8_t mnc1 : 4;
    uint8_t mnc2 : 4;
    uint8_t mnc3 : 4;
} __attribute__((packed)) monitoring_plmn_id_t;

typedef struct {
    uint64_t cell_id;
    char tac[3];
    char plmn_id[6];    // mcc1 + mcc2 + mcc3 + ?mnc1 + mnc2 + mnc3
    char msin[10];
    char imei[14];      // IMEI without check digit and software variable
} UeInfo;

int convert_plmn_id(const void* plmn_id, char* output);
void convert_tac(uint32_t tac, char* output);
void little_to_big_endian(void *data, size_t num_bits);
UeInfo populate_ue_info(uint64_t cell_id, uint32_t tac, const void* plmn_id, char imsi[16], char imei_sv[17]);
int open_sock(const char path[]);
void monitoring_n11_attach_report(uint64_t cell_id, uint32_t tac, const void* plmn_id, char imsi[16], char imei_sv[17]);


#endif //MONITORING_H

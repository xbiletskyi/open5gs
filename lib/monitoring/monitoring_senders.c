#include "monitoring.h"

void monitoring_n11_attach_report(uint64_t cell_id, uint32_t tac, const void* plmn_id, char imsi[16], char imei_sv[17])
{
    int sock = open_sock(MONITORING_SOCKET_PATH_UE_ATTACH);

    UeInfo packet = populate_ue_info(cell_id, tac, plmn_id, imsi, imei_sv);
    send(sock, &packet, sizeof(packet), 0);
}
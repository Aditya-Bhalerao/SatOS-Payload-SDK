///////////////////////////////////////////////////////////////////////////
///
///  

///  Copyright 2022 Antaris, Inc.

///  

///  Licensed under the Apache License, Version 2.0 (the 'License');

///  you may not use this file except in compliance with the License.

///  You may obtain a copy of the License at

///  

///  http://www.apache.org/licenses/LICENSE-2.0

///  

///  Unless required by applicable law or agreed to in writing, software

///  distributed under the License is distributed on an 'AS IS' BASIS,

///  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

///  See the License for the specific language governing permissions and

///  limitations under the License.

///  

///  Copyright: Copyright 2022 Antaris, Inc.

///  This is an autogenerated file. Any changes made to this file would likely be over-written at build time.

///  Generated-From: antaris_api.xml

///
///////////////////////////////////////////////////////////////////////////


#include "stdlib.h"
#include "string.h"
#include "antaris_api.h"
#include "antaris_api.pb.h"
#include "antaris_cpp_standard_includes.h"

extern "C" {

void
displayReqRegisterParams(const void *obj)
{
    ReqRegisterParams *p = (ReqRegisterParams *)obj;

    printf("ReqRegisterParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("health_check_fail_action ==>\n");
    displayUINT16((void *)&p->health_check_fail_action);

}

void
app_to_peer_ReqRegisterParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ReqRegisterParams *src = (ReqRegisterParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ReqRegisterParams *dst = (::antaris_api_peer_to_peer::ReqRegisterParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT32 __tmp_health_check_fail_action;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT16(&src->health_check_fail_action, &__tmp_health_check_fail_action); // health_check_fail_action

    dst->set_health_check_fail_action(__tmp_health_check_fail_action);


}

void
peer_to_app_ReqRegisterParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ReqRegisterParams *dst = (ReqRegisterParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ReqRegisterParams *src = (::antaris_api_peer_to_peer::ReqRegisterParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->health_check_fail_action = src->health_check_fail_action();

}

void
displayRespRegisterParams(const void *obj)
{
    RespRegisterParams *p = (RespRegisterParams *)obj;

    printf("RespRegisterParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("req_status ==>\n");
    displayINT32((void *)&p->req_status);
    printf("auth_token ==>\n");
    for (int i = 0; i < 256; i++) {
        displayINT8((void *)&p->auth_token[i]);
    }


}

void
app_to_peer_RespRegisterParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespRegisterParams *src = (RespRegisterParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespRegisterParams *dst = (::antaris_api_peer_to_peer::RespRegisterParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    INT32 __tmp_req_status;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_INT32(&src->req_status, &__tmp_req_status); // req_status

    dst->set_req_status(__tmp_req_status);

    dst->set_auth_token(&src->auth_token[0]);


}

void
peer_to_app_RespRegisterParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespRegisterParams *dst = (RespRegisterParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespRegisterParams *src = (::antaris_api_peer_to_peer::RespRegisterParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->req_status = src->req_status();
    size_t auth_token_length = strnlen(src->auth_token().c_str(), 256);
    if ( auth_token_length >= 256 ) {
        printf("Error:  auth_token_length should be less than 256 \n");
        return;
    }
    strncpy(&dst->auth_token[0], src->auth_token().c_str(), 256);

}

void
displayReqGetCurrentLocationParams(const void *obj)
{
    ReqGetCurrentLocationParams *p = (ReqGetCurrentLocationParams *)obj;

    printf("ReqGetCurrentLocationParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);

}

void
app_to_peer_ReqGetCurrentLocationParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ReqGetCurrentLocationParams *src = (ReqGetCurrentLocationParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ReqGetCurrentLocationParams *dst = (::antaris_api_peer_to_peer::ReqGetCurrentLocationParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);


}

void
peer_to_app_ReqGetCurrentLocationParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ReqGetCurrentLocationParams *dst = (ReqGetCurrentLocationParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ReqGetCurrentLocationParams *src = (::antaris_api_peer_to_peer::ReqGetCurrentLocationParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();

}

void
displayRespGetCurrentLocationParams(const void *obj)
{
    RespGetCurrentLocationParams *p = (RespGetCurrentLocationParams *)obj;

    printf("RespGetCurrentLocationParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("req_status ==>\n");
    displayINT32((void *)&p->req_status);
    printf("longitude ==>\n");
    displayFLOAT((void *)&p->longitude);
    printf("latitude ==>\n");
    displayFLOAT((void *)&p->latitude);
    printf("altitude ==>\n");
    displayFLOAT((void *)&p->altitude);
    printf("determined_at ==>\n");
    displayUINT64((void *)&p->determined_at);

}

void
app_to_peer_RespGetCurrentLocationParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespGetCurrentLocationParams *src = (RespGetCurrentLocationParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespGetCurrentLocationParams *dst = (::antaris_api_peer_to_peer::RespGetCurrentLocationParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    INT32 __tmp_req_status;
    FLOAT __tmp_longitude;
    FLOAT __tmp_latitude;
    FLOAT __tmp_altitude;
    UINT64 __tmp_determined_at;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_INT32(&src->req_status, &__tmp_req_status); // req_status

    dst->set_req_status(__tmp_req_status);

    app_to_peer_FLOAT(&src->longitude, &__tmp_longitude); // longitude

    dst->set_longitude(__tmp_longitude);

    app_to_peer_FLOAT(&src->latitude, &__tmp_latitude); // latitude

    dst->set_latitude(__tmp_latitude);

    app_to_peer_FLOAT(&src->altitude, &__tmp_altitude); // altitude

    dst->set_altitude(__tmp_altitude);

    app_to_peer_UINT64(&src->determined_at, &__tmp_determined_at); // determined_at

    dst->set_determined_at(__tmp_determined_at);


}

void
peer_to_app_RespGetCurrentLocationParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespGetCurrentLocationParams *dst = (RespGetCurrentLocationParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespGetCurrentLocationParams *src = (::antaris_api_peer_to_peer::RespGetCurrentLocationParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->req_status = src->req_status();
    dst->longitude = src->longitude();
    dst->latitude = src->latitude();
    dst->altitude = src->altitude();
    dst->determined_at = src->determined_at();

}

void
displayReqStageFileDownloadParams(const void *obj)
{
    ReqStageFileDownloadParams *p = (ReqStageFileDownloadParams *)obj;

    printf("ReqStageFileDownloadParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("file_path ==>\n");
    for (int i = 0; i < 256; i++) {
        displayINT8((void *)&p->file_path[i]);
    }


}

void
app_to_peer_ReqStageFileDownloadParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ReqStageFileDownloadParams *src = (ReqStageFileDownloadParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ReqStageFileDownloadParams *dst = (::antaris_api_peer_to_peer::ReqStageFileDownloadParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    dst->set_file_path(&src->file_path[0]);


}

void
peer_to_app_ReqStageFileDownloadParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ReqStageFileDownloadParams *dst = (ReqStageFileDownloadParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ReqStageFileDownloadParams *src = (::antaris_api_peer_to_peer::ReqStageFileDownloadParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    size_t file_path_length = strnlen(src->file_path().c_str(), 256);
    if ( file_path_length >= 256 ) {
        printf("Error:  file_path_length should be less than 256 \n");
        return;
    }
    strncpy(&dst->file_path[0], src->file_path().c_str(), 256);

}

void
displayRespStageFileDownloadParams(const void *obj)
{
    RespStageFileDownloadParams *p = (RespStageFileDownloadParams *)obj;

    printf("RespStageFileDownloadParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("req_status ==>\n");
    displayINT32((void *)&p->req_status);

}

void
app_to_peer_RespStageFileDownloadParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespStageFileDownloadParams *src = (RespStageFileDownloadParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespStageFileDownloadParams *dst = (::antaris_api_peer_to_peer::RespStageFileDownloadParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    INT32 __tmp_req_status;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_INT32(&src->req_status, &__tmp_req_status); // req_status

    dst->set_req_status(__tmp_req_status);


}

void
peer_to_app_RespStageFileDownloadParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespStageFileDownloadParams *dst = (RespStageFileDownloadParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespStageFileDownloadParams *src = (::antaris_api_peer_to_peer::RespStageFileDownloadParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->req_status = src->req_status();

}

void
displayReqPayloadPowerControlParams(const void *obj)
{
    ReqPayloadPowerControlParams *p = (ReqPayloadPowerControlParams *)obj;

    printf("ReqPayloadPowerControlParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("power_operation ==>\n");
    displayUINT16((void *)&p->power_operation);

}

void
app_to_peer_ReqPayloadPowerControlParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ReqPayloadPowerControlParams *src = (ReqPayloadPowerControlParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ReqPayloadPowerControlParams *dst = (::antaris_api_peer_to_peer::ReqPayloadPowerControlParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT32 __tmp_power_operation;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT16(&src->power_operation, &__tmp_power_operation); // power_operation

    dst->set_power_operation(__tmp_power_operation);


}

void
peer_to_app_ReqPayloadPowerControlParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ReqPayloadPowerControlParams *dst = (ReqPayloadPowerControlParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ReqPayloadPowerControlParams *src = (::antaris_api_peer_to_peer::ReqPayloadPowerControlParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->power_operation = src->power_operation();

}

void
displayRespPayloadPowerControlParams(const void *obj)
{
    RespPayloadPowerControlParams *p = (RespPayloadPowerControlParams *)obj;

    printf("RespPayloadPowerControlParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("req_status ==>\n");
    displayINT32((void *)&p->req_status);

}

void
app_to_peer_RespPayloadPowerControlParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespPayloadPowerControlParams *src = (RespPayloadPowerControlParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespPayloadPowerControlParams *dst = (::antaris_api_peer_to_peer::RespPayloadPowerControlParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    INT32 __tmp_req_status;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_INT32(&src->req_status, &__tmp_req_status); // req_status

    dst->set_req_status(__tmp_req_status);


}

void
peer_to_app_RespPayloadPowerControlParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespPayloadPowerControlParams *dst = (RespPayloadPowerControlParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespPayloadPowerControlParams *src = (::antaris_api_peer_to_peer::RespPayloadPowerControlParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->req_status = src->req_status();

}

void
displayRespShutdownParams(const void *obj)
{
    RespShutdownParams *p = (RespShutdownParams *)obj;

    printf("RespShutdownParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("req_status ==>\n");
    displayINT32((void *)&p->req_status);

}

void
app_to_peer_RespShutdownParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespShutdownParams *src = (RespShutdownParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespShutdownParams *dst = (::antaris_api_peer_to_peer::RespShutdownParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    INT32 __tmp_req_status;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_INT32(&src->req_status, &__tmp_req_status); // req_status

    dst->set_req_status(__tmp_req_status);


}

void
peer_to_app_RespShutdownParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespShutdownParams *dst = (RespShutdownParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespShutdownParams *src = (::antaris_api_peer_to_peer::RespShutdownParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->req_status = src->req_status();

}

void
displayRespHealthCheckParams(const void *obj)
{
    RespHealthCheckParams *p = (RespHealthCheckParams *)obj;

    printf("RespHealthCheckParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("application_state ==>\n");
    displayUINT16((void *)&p->application_state);
    printf("reqs_to_pc_in_err_cnt ==>\n");
    displayUINT16((void *)&p->reqs_to_pc_in_err_cnt);
    printf("resps_to_pc_in_err_cnt ==>\n");
    displayUINT16((void *)&p->resps_to_pc_in_err_cnt);

}

void
app_to_peer_RespHealthCheckParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    RespHealthCheckParams *src = (RespHealthCheckParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::RespHealthCheckParams *dst = (::antaris_api_peer_to_peer::RespHealthCheckParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT32 __tmp_application_state;
    UINT32 __tmp_reqs_to_pc_in_err_cnt;
    UINT32 __tmp_resps_to_pc_in_err_cnt;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT16(&src->application_state, &__tmp_application_state); // application_state

    dst->set_application_state(__tmp_application_state);

    app_to_peer_UINT16(&src->reqs_to_pc_in_err_cnt, &__tmp_reqs_to_pc_in_err_cnt); // reqs_to_pc_in_err_cnt

    dst->set_reqs_to_pc_in_err_cnt(__tmp_reqs_to_pc_in_err_cnt);

    app_to_peer_UINT16(&src->resps_to_pc_in_err_cnt, &__tmp_resps_to_pc_in_err_cnt); // resps_to_pc_in_err_cnt

    dst->set_resps_to_pc_in_err_cnt(__tmp_resps_to_pc_in_err_cnt);


}

void
peer_to_app_RespHealthCheckParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    RespHealthCheckParams *dst = (RespHealthCheckParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::RespHealthCheckParams *src = (::antaris_api_peer_to_peer::RespHealthCheckParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->application_state = src->application_state();
    dst->reqs_to_pc_in_err_cnt = src->reqs_to_pc_in_err_cnt();
    dst->resps_to_pc_in_err_cnt = src->resps_to_pc_in_err_cnt();

}

void
displayStartSequenceParams(const void *obj)
{
    StartSequenceParams *p = (StartSequenceParams *)obj;

    printf("StartSequenceParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("sequence_id ==>\n");
    for (int i = 0; i < 16; i++) {
        displayINT8((void *)&p->sequence_id[i]);
    }

    printf("sequence_params ==>\n");
    for (int i = 0; i < 64; i++) {
        displayINT8((void *)&p->sequence_params[i]);
    }

    printf("scheduled_deadline ==>\n");
    displayUINT64((void *)&p->scheduled_deadline);

}

void
app_to_peer_StartSequenceParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    StartSequenceParams *src = (StartSequenceParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::StartSequenceParams *dst = (::antaris_api_peer_to_peer::StartSequenceParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT64 __tmp_scheduled_deadline;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    dst->set_sequence_id(&src->sequence_id[0]);

    dst->set_sequence_params(&src->sequence_params[0]);

    app_to_peer_UINT64(&src->scheduled_deadline, &__tmp_scheduled_deadline); // scheduled_deadline

    dst->set_scheduled_deadline(__tmp_scheduled_deadline);


}

void
peer_to_app_StartSequenceParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    StartSequenceParams *dst = (StartSequenceParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::StartSequenceParams *src = (::antaris_api_peer_to_peer::StartSequenceParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    size_t sequence_id_length = strnlen(src->sequence_id().c_str(), 16);
    if ( sequence_id_length >= 16 ) {
        printf("Error:  sequence_id_length should be less than 16 \n");
        return;
    }
    strncpy(&dst->sequence_id[0], src->sequence_id().c_str(), 16);
    size_t sequence_params_length = strnlen(src->sequence_params().c_str(), 64);
    if ( sequence_params_length >= 64 ) {
        printf("Error:  sequence_params_length should be less than 64 \n");
        return;
    }
    strncpy(&dst->sequence_params[0], src->sequence_params().c_str(), 64);
    dst->scheduled_deadline = src->scheduled_deadline();

}

void
displayShutdownParams(const void *obj)
{
    ShutdownParams *p = (ShutdownParams *)obj;

    printf("ShutdownParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("grace_time ==>\n");
    displayUINT16((void *)&p->grace_time);

}

void
app_to_peer_ShutdownParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ShutdownParams *src = (ShutdownParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ShutdownParams *dst = (::antaris_api_peer_to_peer::ShutdownParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT32 __tmp_grace_time;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT16(&src->grace_time, &__tmp_grace_time); // grace_time

    dst->set_grace_time(__tmp_grace_time);


}

void
peer_to_app_ShutdownParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ShutdownParams *dst = (ShutdownParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ShutdownParams *src = (::antaris_api_peer_to_peer::ShutdownParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->grace_time = src->grace_time();

}

void
displayHealthCheckParams(const void *obj)
{
    HealthCheckParams *p = (HealthCheckParams *)obj;

    printf("HealthCheckParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("application_state ==>\n");
    displayUINT16((void *)&p->application_state);
    printf("reqs_to_pc_in_err_cnt ==>\n");
    displayUINT16((void *)&p->reqs_to_pc_in_err_cnt);
    printf("resps_to_pc_in_err_cnt ==>\n");
    displayUINT16((void *)&p->resps_to_pc_in_err_cnt);

}

void
app_to_peer_HealthCheckParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    HealthCheckParams *src = (HealthCheckParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::HealthCheckParams *dst = (::antaris_api_peer_to_peer::HealthCheckParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT32 __tmp_application_state;
    UINT32 __tmp_reqs_to_pc_in_err_cnt;
    UINT32 __tmp_resps_to_pc_in_err_cnt;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT16(&src->application_state, &__tmp_application_state); // application_state

    dst->set_application_state(__tmp_application_state);

    app_to_peer_UINT16(&src->reqs_to_pc_in_err_cnt, &__tmp_reqs_to_pc_in_err_cnt); // reqs_to_pc_in_err_cnt

    dst->set_reqs_to_pc_in_err_cnt(__tmp_reqs_to_pc_in_err_cnt);

    app_to_peer_UINT16(&src->resps_to_pc_in_err_cnt, &__tmp_resps_to_pc_in_err_cnt); // resps_to_pc_in_err_cnt

    dst->set_resps_to_pc_in_err_cnt(__tmp_resps_to_pc_in_err_cnt);


}

void
peer_to_app_HealthCheckParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    HealthCheckParams *dst = (HealthCheckParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::HealthCheckParams *src = (::antaris_api_peer_to_peer::HealthCheckParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->application_state = src->application_state();
    dst->reqs_to_pc_in_err_cnt = src->reqs_to_pc_in_err_cnt();
    dst->resps_to_pc_in_err_cnt = src->resps_to_pc_in_err_cnt();

}

void
displayPayloadMetricsInfo(const void *obj)
{
    PayloadMetricsInfo *p = (PayloadMetricsInfo *)obj;

    printf("PayloadMetricsInfo %p =>\n", obj);

    printf("counter ==>\n");
    displayUINT32((void *)&p->counter);
    printf("names ==>\n");
    for (int i = 0; i < 16; i++) {
        displayINT8((void *)&p->names[i]);
    }


}

void
app_to_peer_PayloadMetricsInfo(const void *ptr_src_app, void *ptr_dst_peer)
{
    PayloadMetricsInfo *src = (PayloadMetricsInfo *)ptr_src_app;
    ::antaris_api_peer_to_peer::PayloadMetricsInfo *dst = (::antaris_api_peer_to_peer::PayloadMetricsInfo *)ptr_dst_peer;

    UINT32 __tmp_counter;

    app_to_peer_UINT32(&src->counter, &__tmp_counter); // counter

    dst->set_counter(__tmp_counter);

    dst->set_names(&src->names[0]);


}

void
peer_to_app_PayloadMetricsInfo(const void *ptr_src_peer, void *ptr_dst_app)
{
    PayloadMetricsInfo *dst = (PayloadMetricsInfo *)ptr_dst_app;
    ::antaris_api_peer_to_peer::PayloadMetricsInfo *src = (::antaris_api_peer_to_peer::PayloadMetricsInfo *)ptr_src_peer;

    dst->counter = src->counter();
    size_t names_length = strnlen(src->names().c_str(), 16);
    if ( names_length >= 16 ) {
        printf("Error:  names_length should be less than 16 \n");
        return;
    }
    strncpy(&dst->names[0], src->names().c_str(), 16);

}

void
displayReqPayloadMetricsParams(const void *obj)
{
    ReqPayloadMetricsParams *p = (ReqPayloadMetricsParams *)obj;

    printf("ReqPayloadMetricsParams %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);

}

void
app_to_peer_ReqPayloadMetricsParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    ReqPayloadMetricsParams *src = (ReqPayloadMetricsParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::ReqPayloadMetricsParams *dst = (::antaris_api_peer_to_peer::ReqPayloadMetricsParams *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);


}

void
peer_to_app_ReqPayloadMetricsParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    ReqPayloadMetricsParams *dst = (ReqPayloadMetricsParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::ReqPayloadMetricsParams *src = (::antaris_api_peer_to_peer::ReqPayloadMetricsParams *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();

}

void
displayPayloadMetricsResponse(const void *obj)
{
    PayloadMetricsResponse *p = (PayloadMetricsResponse *)obj;

    printf("PayloadMetricsResponse %p =>\n", obj);

    printf("correlation_id ==>\n");
    displayUINT16((void *)&p->correlation_id);
    printf("timestamp ==>\n");
    displayUINT64((void *)&p->timestamp);
    printf("used_counter ==>\n");
    displayUINT32((void *)&p->used_counter);
    printf("metrics ==>\n");
    for (int i = 0; i < 8; i++) {
        displayPayloadMetricsInfo((void *)&p->metrics[i]);
    }


}

void
app_to_peer_PayloadMetricsResponse(const void *ptr_src_app, void *ptr_dst_peer)
{
    PayloadMetricsResponse *src = (PayloadMetricsResponse *)ptr_src_app;
    ::antaris_api_peer_to_peer::PayloadMetricsResponse *dst = (::antaris_api_peer_to_peer::PayloadMetricsResponse *)ptr_dst_peer;

    UINT32 __tmp_correlation_id;
    UINT64 __tmp_timestamp;
    UINT32 __tmp_used_counter;
    PayloadMetricsInfo __tmp_metrics;

    app_to_peer_UINT16(&src->correlation_id, &__tmp_correlation_id); // correlation_id

    dst->set_correlation_id(__tmp_correlation_id);

    app_to_peer_UINT64(&src->timestamp, &__tmp_timestamp); // timestamp

    dst->set_timestamp(__tmp_timestamp);

    app_to_peer_UINT32(&src->used_counter, &__tmp_used_counter); // used_counter

    dst->set_used_counter(__tmp_used_counter);

    for (int i = 0; i < 8; i++) { // metrics
        ::antaris_api_peer_to_peer::PayloadMetricsInfo *dst_info = dst->mutable_metrics(i);
        app_to_peer_PayloadMetricsInfo(&src->metrics[i], dst_info);
    }

}

void
peer_to_app_PayloadMetricsResponse(const void *ptr_src_peer, void *ptr_dst_app)
{
    PayloadMetricsResponse *dst = (PayloadMetricsResponse *)ptr_dst_app;
    ::antaris_api_peer_to_peer::PayloadMetricsResponse *src = (::antaris_api_peer_to_peer::PayloadMetricsResponse *)ptr_src_peer;

    dst->correlation_id = src->correlation_id();
    dst->timestamp = src->timestamp();
    dst->used_counter = src->used_counter();
    for (int i = 0; i < 8; i++) { // metrics
        const ::antaris_api_peer_to_peer::PayloadMetricsInfo &src_info = src->metrics(i);
        PayloadMetricsInfo *dst_info = &dst->metrics[i];

        peer_to_app_PayloadMetricsInfo(&src_info, dst_info);
    }

}

void
displayCmdSequenceDoneParams(const void *obj)
{
    CmdSequenceDoneParams *p = (CmdSequenceDoneParams *)obj;

    printf("CmdSequenceDoneParams %p =>\n", obj);

    printf("sequence_id ==>\n");
    for (int i = 0; i < 16; i++) {
        displayINT8((void *)&p->sequence_id[i]);
    }


}

void
app_to_peer_CmdSequenceDoneParams(const void *ptr_src_app, void *ptr_dst_peer)
{
    CmdSequenceDoneParams *src = (CmdSequenceDoneParams *)ptr_src_app;
    ::antaris_api_peer_to_peer::CmdSequenceDoneParams *dst = (::antaris_api_peer_to_peer::CmdSequenceDoneParams *)ptr_dst_peer;


    dst->set_sequence_id(&src->sequence_id[0]);


}

void
peer_to_app_CmdSequenceDoneParams(const void *ptr_src_peer, void *ptr_dst_app)
{
    CmdSequenceDoneParams *dst = (CmdSequenceDoneParams *)ptr_dst_app;
    ::antaris_api_peer_to_peer::CmdSequenceDoneParams *src = (::antaris_api_peer_to_peer::CmdSequenceDoneParams *)ptr_src_peer;

    size_t sequence_id_length = strnlen(src->sequence_id().c_str(), 16);
    if ( sequence_id_length >= 16 ) {
        printf("Error:  sequence_id_length should be less than 16 \n");
        return;
    }
    strncpy(&dst->sequence_id[0], src->sequence_id().c_str(), 16);

}

void
displayAntarisApiCallbackFuncList(const void *obj)
{
    AntarisApiCallbackFuncList *p = (AntarisApiCallbackFuncList *)obj;

    printf("AntarisApiCallbackFuncList %p =>\n", obj);

    printf("start_sequence ==>\n");
    displayStartSequence_Fptr((void *)&p->start_sequence);
    printf("shutdown_app ==>\n");
    displayShutdownApp_Fptr((void *)&p->shutdown_app);
    printf("process_health_check ==>\n");
    displayProcessHealthCheck_Fptr((void *)&p->process_health_check);
    printf("process_response_register ==>\n");
    displayProcessResponseRegister_Fptr((void *)&p->process_response_register);
    printf("process_response_get_current_location ==>\n");
    displayProcessResponseGetCurrentLocation_Fptr((void *)&p->process_response_get_current_location);
    printf("process_response_stage_file_download ==>\n");
    displayProcessResponseStageFileDownload_Fptr((void *)&p->process_response_stage_file_download);
    printf("process_response_payload_power_control ==>\n");
    displayProcessResponsePayloadPowerControl_Fptr((void *)&p->process_response_payload_power_control);
    printf("req_payload_metrics ==>\n");
    displayProcessReqPayloadMetrics_Fptr((void *)&p->req_payload_metrics);

}

void
displayAntarisCorrelationId(const void *obj)
{
    AntarisCorrelationId *p = (AntarisCorrelationId *)obj;

    printf("AntarisCorrelationId %p =>\n", obj);


}

void
app_to_peer_AntarisCorrelationId(const void *ptr_src_app, void *ptr_dst_peer)
{
    AntarisCorrelationId *src = (AntarisCorrelationId *)ptr_src_app;
    ::antaris_api_peer_to_peer::AntarisCorrelationId *dst = (::antaris_api_peer_to_peer::AntarisCorrelationId *)ptr_dst_peer;



}

void
peer_to_app_AntarisCorrelationId(const void *ptr_src_peer, void *ptr_dst_app)
{
    AntarisCorrelationId *dst = (AntarisCorrelationId *)ptr_dst_app;
    ::antaris_api_peer_to_peer::AntarisCorrelationId *src = (::antaris_api_peer_to_peer::AntarisCorrelationId *)ptr_src_peer;


}

void
displayAntarisReturnType(const void *obj)
{
    AntarisReturnType *p = (AntarisReturnType *)obj;

    printf("AntarisReturnType %p =>\n", obj);

    printf("return_code ==>\n");
    displayAntarisReturnCode((void *)&p->return_code);

}

void
app_to_peer_AntarisReturnType(const void *ptr_src_app, void *ptr_dst_peer)
{
    AntarisReturnType *src = (AntarisReturnType *)ptr_src_app;
    ::antaris_api_peer_to_peer::AntarisReturnType *dst = (::antaris_api_peer_to_peer::AntarisReturnType *)ptr_dst_peer;

    AntarisReturnCode __tmp_return_code;

    app_to_peer_AntarisReturnCode(&src->return_code, &__tmp_return_code); // return_code

    dst->set_return_code((::antaris_api_peer_to_peer::AntarisReturnCode)__tmp_return_code);


}

void
peer_to_app_AntarisReturnType(const void *ptr_src_peer, void *ptr_dst_app)
{
    AntarisReturnType *dst = (AntarisReturnType *)ptr_dst_app;
    ::antaris_api_peer_to_peer::AntarisReturnType *src = (::antaris_api_peer_to_peer::AntarisReturnType *)ptr_src_peer;

    dst->return_code = (AntarisReturnCode)src->return_code();

}

void
displayAntarisReturnCode(void *obj)
{
    printf("%s => %d\n", "AntarisReturnCode", *(INT32 *)obj);
}

void
app_to_peer_AntarisReturnCode(void *ptr_src_app, void *ptr_dst_peer)
{
    AntarisReturnCode *src = (AntarisReturnCode *)ptr_src_app;
    AntarisReturnCode *dst = (AntarisReturnCode *)ptr_dst_peer;

    *dst = *src;

}


} // extern "C"


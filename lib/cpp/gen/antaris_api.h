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



#ifndef __AUTOGEN_ANTARIS_API_H__
#define __AUTOGEN_ANTARIS_API_H__

#include "antaris_api_common.h"
#include "stdio.h"

#ifdef __cplusplus
extern "C" {
#endif


// >>>> Forward declarations and enums <<<<<

/// @enum AntarisReturnCode
/// @brief Api return codes
typedef enum AntarisReturnCode {
    An_SUCCESS                       = 0,                               ///< Success
    An_GENERIC_FAILURE               = -1,                              ///< Generic failure
    An_NOT_IMPLEMENTED               = -2,                              ///< Feature/interface not implemented
    An_OUT_OF_RESOURCES              = -3,                              ///< Not enough resources
    An_NOT_PERMITTED                 = -4,                              ///< Operation not allowed
    An_INVALID_PARAMS                = -5,                              ///< Invalid parameter
    An_INCOMPATIBLE_VERSION          = -6,                              ///< Incompatible version of SDK invocation
} AntarisReturnCode;

void displayAntarisReturnCode(void *obj);
void app_to_peer_AntarisReturnCode(void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_AntarisReturnCode(void *ptr_src_peer, void *ptr_dst_app);

struct ReqRegisterParams;
typedef struct ReqRegisterParams ReqRegisterParams;

struct RespRegisterParams;
typedef struct RespRegisterParams RespRegisterParams;

struct ReqGetCurrentLocationParams;
typedef struct ReqGetCurrentLocationParams ReqGetCurrentLocationParams;

struct RespGetCurrentLocationParams;
typedef struct RespGetCurrentLocationParams RespGetCurrentLocationParams;

struct ReqStageFileDownloadParams;
typedef struct ReqStageFileDownloadParams ReqStageFileDownloadParams;

struct RespStageFileDownloadParams;
typedef struct RespStageFileDownloadParams RespStageFileDownloadParams;

struct ReqPayloadPowerControlParams;
typedef struct ReqPayloadPowerControlParams ReqPayloadPowerControlParams;

struct RespPayloadPowerControlParams;
typedef struct RespPayloadPowerControlParams RespPayloadPowerControlParams;

struct RespShutdownParams;
typedef struct RespShutdownParams RespShutdownParams;

struct RespHealthCheckParams;
typedef struct RespHealthCheckParams RespHealthCheckParams;

struct StartSequenceParams;
typedef struct StartSequenceParams StartSequenceParams;

struct ShutdownParams;
typedef struct ShutdownParams ShutdownParams;

struct HealthCheckParams;
typedef struct HealthCheckParams HealthCheckParams;

struct CmdSequenceDoneParams;
typedef struct CmdSequenceDoneParams CmdSequenceDoneParams;

struct AntarisApiCallbackFuncList;
typedef struct AntarisApiCallbackFuncList AntarisApiCallbackFuncList;

struct AntarisCorrelationId;
typedef struct AntarisCorrelationId AntarisCorrelationId;

struct AntarisReturnType;
typedef struct AntarisReturnType AntarisReturnType;


// >>>> Callback function-ptr types <<<<<

/// @brief Callback function type StartSequence_Fptr
/// @typedef Callback indicating specific sequence can begin

typedef AntarisReturnCode
(*StartSequence_Fptr)
(
    StartSequenceParams *            ///< @param String containing sequence name/id and parameters that PA wants to run
);
static inline void
displayStartSequence_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ShutdownApp_Fptr
/// @typedef Callback request to shutdown application

typedef AntarisReturnCode
(*ShutdownApp_Fptr)
(
    ShutdownParams *                 ///< @param Shutdown request parameters
);
static inline void
displayShutdownApp_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ProcessHealthCheck_Fptr
/// @typedef HealthCheck callback

typedef AntarisReturnCode
(*ProcessHealthCheck_Fptr)
(
    HealthCheckParams *              ///< @param Health-check params
);
static inline void
displayProcessHealthCheck_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ProcessResponseRegister_Fptr
/// @typedef Callback for Registration response

typedef AntarisReturnCode
(*ProcessResponseRegister_Fptr)
(
    RespRegisterParams *             ///< @param Registration response parameters
);
static inline void
displayProcessResponseRegister_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ProcessResponseGetCurrentLocation_Fptr
/// @typedef Callback for current-location response

typedef AntarisReturnCode
(*ProcessResponseGetCurrentLocation_Fptr)
(
    RespGetCurrentLocationParams *   ///< @param Get-current-location response parameters
);
static inline void
displayProcessResponseGetCurrentLocation_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ProcessResponseStageFileDownload_Fptr
/// @typedef Callback for stage file download response

typedef AntarisReturnCode
(*ProcessResponseStageFileDownload_Fptr)
(
    RespStageFileDownloadParams *    ///< @param Stage file download parameters
);
static inline void
displayProcessResponseStageFileDownload_Fptr(void *obj) { printf("%p\n", obj); }
/// @brief Callback function type ProcessResponsePayloadPowerControl_Fptr
/// @typedef Callback for payload-power-control response

typedef AntarisReturnCode
(*ProcessResponsePayloadPowerControl_Fptr)
(
    RespPayloadPowerControlParams *  ///< @param Payload-power-control response parameters
);
static inline void
displayProcessResponsePayloadPowerControl_Fptr(void *obj) { printf("%p\n", obj); }

// >>>> Data Types <<<<<

/// @struct ReqRegisterParams
/// @brief Request parameters for registering with Payload Controller
struct ReqRegisterParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    UINT16                                          health_check_fail_action;                        ///< @var Action to be taken by PC on application health check failure
};

void displayReqRegisterParams(const void *obj);
void app_to_peer_ReqRegisterParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_ReqRegisterParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespRegisterParams
/// @brief Response parameters following registration with Payload Controller
struct RespRegisterParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT32                                           req_status;                                      ///< @var status of registration request
    INT8                                            auth_token[256];                                 ///< @var auth-token to be used in case secure communication had been requested for while registering
};

void displayRespRegisterParams(const void *obj);
void app_to_peer_RespRegisterParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespRegisterParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct ReqGetCurrentLocationParams
/// @brief Parameters for get current location request
struct ReqGetCurrentLocationParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
};

void displayReqGetCurrentLocationParams(const void *obj);
void app_to_peer_ReqGetCurrentLocationParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_ReqGetCurrentLocationParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespGetCurrentLocationParams
/// @brief Response parameters for Get Location Flight Service
struct RespGetCurrentLocationParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT32                                           req_status;                                      ///< @var status of get-location request
    FLOAT                                           longitude;                                       ///< @var current latitude
    FLOAT                                           latitude;                                        ///< @var current longitude
    FLOAT                                           altitude;                                        ///< @var current altitude
    UINT64                                          determined_at;                                   ///< @var time (seconds since epoch) when the location was determined
};

void displayRespGetCurrentLocationParams(const void *obj);
void app_to_peer_RespGetCurrentLocationParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespGetCurrentLocationParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct ReqStageFileDownloadParams
/// @brief Request parameters to stage file download
struct ReqStageFileDownloadParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT8                                            file_path[256];                                  ///< @var File path relative to outbound mount-point
};

void displayReqStageFileDownloadParams(const void *obj);
void app_to_peer_ReqStageFileDownloadParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_ReqStageFileDownloadParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespStageFileDownloadParams
/// @brief Response parameters for stage file download reqeust
struct RespStageFileDownloadParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT32                                           req_status;                                      ///< @var status of stage file-download request
};

void displayRespStageFileDownloadParams(const void *obj);
void app_to_peer_RespStageFileDownloadParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespStageFileDownloadParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct ReqPayloadPowerControlParams
/// @brief Request parameters for Payload Power Control
struct ReqPayloadPowerControlParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    UINT16                                          power_operation;                                 ///< @var Power operation : Power-Off (0), Power-On (1)
};

void displayReqPayloadPowerControlParams(const void *obj);
void app_to_peer_ReqPayloadPowerControlParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_ReqPayloadPowerControlParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespPayloadPowerControlParams
/// @brief Response parameters for Payload Power Control request
struct RespPayloadPowerControlParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT32                                           req_status;                                      ///< @var status of payload-power-control request
};

void displayRespPayloadPowerControlParams(const void *obj);
void app_to_peer_RespPayloadPowerControlParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespPayloadPowerControlParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespShutdownParams
/// @brief Response parameters for application shutdown request from PC
struct RespShutdownParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT32                                           req_status;                                      ///< @var status of payload application shutdown request
};

void displayRespShutdownParams(const void *obj);
void app_to_peer_RespShutdownParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespShutdownParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct RespHealthCheckParams
/// @brief Response parameters for Health Check request
struct RespHealthCheckParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    UINT16                                          application_state;                               ///< @var Application State : Good (0), Error (non-Zero)
    UINT16                                          reqs_to_pc_in_err_cnt;                           ///< @var Number of requests to PC that faced error
    UINT16                                          resps_to_pc_in_err_cnt;                          ///< @var Number of responses to PC that faced error
};

void displayRespHealthCheckParams(const void *obj);
void app_to_peer_RespHealthCheckParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_RespHealthCheckParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct StartSequenceParams
/// @brief Parameters for Start-Sequence Callback
struct StartSequenceParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    INT8                                            sequence_id[16];                                 ///< @var app-defined sequence-id for payload application to execute
    INT8                                            sequence_params[64];                             ///< @var app-defined sequence parameters corresponding to the sequence-id
    UINT64                                          scheduled_deadline;                              ///< @var Epoch time till this sequence is allowed to run
};

void displayStartSequenceParams(const void *obj);
void app_to_peer_StartSequenceParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_StartSequenceParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct ShutdownParams
/// @brief Callback parameters notifying Application of imminent shutdown
struct ShutdownParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    UINT16                                          grace_time;                                      ///< @var grace time in seconds after which the VM will be powered down
};

void displayShutdownParams(const void *obj);
void app_to_peer_ShutdownParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_ShutdownParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct HealthCheckParams
/// @brief HealthCheck message
struct HealthCheckParams {
    UINT16                                          correlation_id;                                  ///< @var correlation id for matching requests with responses and callbacks
    UINT16                                          application_state;                               ///< @var Application State : Good (0), Error (non-Zero)
    UINT16                                          reqs_to_pc_in_err_cnt;                           ///< @var Number of requests to PC that faced error
    UINT16                                          resps_to_pc_in_err_cnt;                          ///< @var Number of responses to PC that faced error
};

void displayHealthCheckParams(const void *obj);
void app_to_peer_HealthCheckParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_HealthCheckParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct CmdSequenceDoneParams
/// @brief Parameters for Command Sequence Done notification to Payload Controller
struct CmdSequenceDoneParams {
    INT8                                            sequence_id[16];                                 ///< @var sequence id that has completed execution. MUST agree with StartSequenceParams.sequence-id.
};

void displayCmdSequenceDoneParams(const void *obj);
void app_to_peer_CmdSequenceDoneParams(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_CmdSequenceDoneParams(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct AntarisApiCallbackFuncList
/// @brief Callback-functions registration structure for channel creation
struct AntarisApiCallbackFuncList {
    StartSequence_Fptr                              start_sequence;                                  ///< @var callback handler for start-sequence
    ShutdownApp_Fptr                                shutdown_app;                                    ///< @var callback handler for shutdown-app
    ProcessHealthCheck_Fptr                         process_health_check;                            ///< @var callback handler for health-check request from PC
    ProcessResponseRegister_Fptr                    process_response_register;                       ///< @var callback handler for registration response
    ProcessResponseGetCurrentLocation_Fptr          process_response_get_current_location;           ///< @var callback handler for current-location response
    ProcessResponseStageFileDownload_Fptr           process_response_stage_file_download;            ///< @var callback handler for stage file download response
    ProcessResponsePayloadPowerControl_Fptr         process_response_payload_power_control;          ///< @var callback handler for payload power control response
};

void displayAntarisApiCallbackFuncList(const void *obj);
/// @struct AntarisCorrelationId
/// @brief Wrapper structure for correlation-id
struct AntarisCorrelationId {
};

void displayAntarisCorrelationId(const void *obj);
void app_to_peer_AntarisCorrelationId(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_AntarisCorrelationId(const void *ptr_src_peer, void *ptr_dst_app);

/// @struct AntarisReturnType
/// @brief Wrapper structure for AntarisReturnCode
struct AntarisReturnType {
    AntarisReturnCode                               return_code;                                     ///< @var return code
};

void displayAntarisReturnType(const void *obj);
void app_to_peer_AntarisReturnType(const void *ptr_src_app, void *ptr_dst_peer);
void peer_to_app_AntarisReturnType(const void *ptr_src_peer, void *ptr_dst_app);


// >>>> Function Prototypes <<<<<

/// @brief Function api_pa_pc_create_channel
/// @fn Create a channel for use as API Context
AntarisChannel
api_pa_pc_create_channel
(
    AntarisApiCallbackFuncList *    callback_func_list               ///< @param Handlers for callbacks from Payload Controller
);

/// @brief Function api_pa_pc_create_insecure_channel
/// @fn Create an insecure channel for use as API Context
AntarisChannel
api_pa_pc_create_insecure_channel
(
    AntarisApiCallbackFuncList *    callback_func_list               ///< @param Handlers for callbacks from Payload Controller
);

/// @brief Function api_pa_pc_delete_channel
/// @fn Delete a channel handle
AntarisReturnCode
api_pa_pc_delete_channel
(
    AntarisChannel                  channel                          ///< @param channel context to delete
);

/// @brief Function api_pa_pc_register
/// @fn Register with Payload Controller
AntarisReturnCode
api_pa_pc_register
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    ReqRegisterParams *             register_params                  ///< @param Registration Request parameters
);

/// @brief Function api_pa_pc_get_current_location
/// @fn Get current location flight-service API
AntarisReturnCode
api_pa_pc_get_current_location
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    ReqGetCurrentLocationParams *   get_current_location_params      ///< @param Get current location request parameters
);

/// @brief Function api_pa_pc_stage_file_download
/// @fn API to stage a file for download
AntarisReturnCode
api_pa_pc_stage_file_download
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    ReqStageFileDownloadParams *    stage_file_download_params       ///< @param Stage file download parameters
);

/// @brief Function api_pa_pc_sequence_done
/// @fn Inform Payload Controller about completion of a sequence
AntarisReturnCode
api_pa_pc_sequence_done
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    CmdSequenceDoneParams *         sequence_done_params             ///< @param Sequence done parameters
);

/// @brief Function api_pa_pc_payload_power_control
/// @fn Payload Payload Power Control API
AntarisReturnCode
api_pa_pc_payload_power_control
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    ReqPayloadPowerControlParams *  payload_power_control_params     ///< @param Payload power control parameters
);

/// @brief Function api_pa_pc_response_health_check
/// @fn API to respond to health-check request from PC
AntarisReturnCode
api_pa_pc_response_health_check
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    RespHealthCheckParams *         response_health_check_params     ///< @param Health check response parameters
);

/// @brief Function api_pa_pc_response_shutdown
/// @fn API to respond to shutdown request from PC
AntarisReturnCode
api_pa_pc_response_shutdown
(
    AntarisChannel                  channel,                         ///< @param channel context for API execution
    RespShutdownParams *            response_shutdown_params         ///< @param Shutdown response parameters
);


#ifdef __cplusplus
} // extern C
#endif



#endif

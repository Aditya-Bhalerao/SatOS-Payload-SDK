###########################################################################
#
#  

#  Copyright 2022 Antaris, Inc.

#  

#  Licensed under the Apache License, Version 2.0 (the 'License');

#  you may not use this file except in compliance with the License.

#  You may obtain a copy of the License at

#  

#  http://www.apache.org/licenses/LICENSE-2.0

#  

#  Unless required by applicable law or agreed to in writing, software

#  distributed under the License is distributed on an 'AS IS' BASIS,

#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#  See the License for the specific language governing permissions and

#  limitations under the License.

#  

#  Copyright: Copyright 2022 Antaris, Inc.

#  This is an autogenerated file. Any changes made to this file would likely be over-written at build time.

#  Generated-From: antaris_api.xml

#  Version: 0.0.1

#
###########################################################################


import antaris_api_pb2
import antaris_api_pb2_grpc

# >>>> Data Types <<<<<

# ENUM: AntarisReturnCode - Api return codes
class AntarisReturnCode:
    An_SUCCESS = 0 # Success
    An_GENERIC_FAILURE = -1 # Generic failure
    An_NOT_IMPLEMENTED = -2 # Feature/interface not implemented
    An_OUT_OF_RESOURCES = -3 # Not enough resources
    An_NOT_PERMITTED = -4 # Operation not allowed
    An_INVALID_PARAMS = -5 # Invalid parameter


    reverse_dict = {0 : "An_SUCCESS", -1 : "An_GENERIC_FAILURE", -2 : "An_NOT_IMPLEMENTED", -3 : "An_OUT_OF_RESOURCES", -4 : "An_NOT_PERMITTED", -5 : "An_INVALID_PARAMS"}



## @class: ReqRegisterParams
## @brief: Request parameters for registering with Payload Controller
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: health_check_fail_action                        :    Action to be taken by PC on application health check failure
class ReqRegisterParams:
    def __init__(self, correlation_id, health_check_fail_action):
        self.correlation_id = correlation_id
        self.health_check_fail_action = health_check_fail_action

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "health_check_fail_action:\n"
        ret_str += str(self.health_check_fail_action) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_ReqRegisterParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    health_check_fail_action = peer_struct.health_check_fail_action
    return ReqRegisterParams(correlation_id, health_check_fail_action)

def app_to_peer_ReqRegisterParams(app_struct):
    return antaris_api_pb2.ReqRegisterParams(correlation_id = app_struct.correlation_id, health_check_fail_action = app_struct.health_check_fail_action)

## @class: RespRegisterParams
## @brief: Response parameters following registration with Payload Controller
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: req_status                                      :    status of registration request                  
## @param: auth_token                                      :    auth-token to be used in case secure communication had been requested for while registering
class RespRegisterParams:
    def __init__(self, correlation_id, req_status, auth_token):
        self.correlation_id = correlation_id
        self.req_status = req_status
        self.auth_token = auth_token

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "req_status:\n"
        ret_str += str(self.req_status) + "\n"
        ret_str += "auth_token:\n"
        ret_str += str(self.auth_token) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespRegisterParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    req_status = peer_struct.req_status
    auth_token = peer_struct.auth_token
    return RespRegisterParams(correlation_id, req_status, auth_token)

def app_to_peer_RespRegisterParams(app_struct):
    return antaris_api_pb2.RespRegisterParams(correlation_id = app_struct.correlation_id, req_status = app_struct.req_status, auth_token = app_struct.auth_token)

## @class: ReqGetCurrentLocationParams
## @brief: Parameters for get current location request
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
class ReqGetCurrentLocationParams:
    def __init__(self, correlation_id):
        self.correlation_id = correlation_id

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_ReqGetCurrentLocationParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    return ReqGetCurrentLocationParams(correlation_id)

def app_to_peer_ReqGetCurrentLocationParams(app_struct):
    return antaris_api_pb2.ReqGetCurrentLocationParams(correlation_id = app_struct.correlation_id)

## @class: RespGetCurrentLocationParams
## @brief: Response parameters for Get Location Flight Service
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: req_status                                      :    status of get-location request                  
## @param: longitude                                       :    current latitude                                
## @param: latitude                                        :    current longitude                               
## @param: altitude                                        :    current altitude                                
## @param: determined_at                                   :    time (seconds since epoch) when the location was determined
class RespGetCurrentLocationParams:
    def __init__(self, correlation_id, req_status, longitude, latitude, altitude, determined_at):
        self.correlation_id = correlation_id
        self.req_status = req_status
        self.longitude = longitude
        self.latitude = latitude
        self.altitude = altitude
        self.determined_at = determined_at

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "req_status:\n"
        ret_str += str(self.req_status) + "\n"
        ret_str += "longitude:\n"
        ret_str += str(self.longitude) + "\n"
        ret_str += "latitude:\n"
        ret_str += str(self.latitude) + "\n"
        ret_str += "altitude:\n"
        ret_str += str(self.altitude) + "\n"
        ret_str += "determined_at:\n"
        ret_str += str(self.determined_at) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespGetCurrentLocationParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    req_status = peer_struct.req_status
    longitude = peer_struct.longitude
    latitude = peer_struct.latitude
    altitude = peer_struct.altitude
    determined_at = peer_struct.determined_at
    return RespGetCurrentLocationParams(correlation_id, req_status, longitude, latitude, altitude, determined_at)

def app_to_peer_RespGetCurrentLocationParams(app_struct):
    return antaris_api_pb2.RespGetCurrentLocationParams(correlation_id = app_struct.correlation_id, req_status = app_struct.req_status, longitude = app_struct.longitude, latitude = app_struct.latitude, altitude = app_struct.altitude, determined_at = app_struct.determined_at)

## @class: ReqStageFileDownloadParams
## @brief: Request parameters to stage file download
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: file_path                                       :    File path relative to outbound mount-point      
class ReqStageFileDownloadParams:
    def __init__(self, correlation_id, file_path):
        self.correlation_id = correlation_id
        self.file_path = file_path

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "file_path:\n"
        ret_str += str(self.file_path) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_ReqStageFileDownloadParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    file_path = peer_struct.file_path
    return ReqStageFileDownloadParams(correlation_id, file_path)

def app_to_peer_ReqStageFileDownloadParams(app_struct):
    return antaris_api_pb2.ReqStageFileDownloadParams(correlation_id = app_struct.correlation_id, file_path = app_struct.file_path)

## @class: RespStageFileDownloadParams
## @brief: Response parameters for stage file download reqeust
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: req_status                                      :    status of stage file-download request           
class RespStageFileDownloadParams:
    def __init__(self, correlation_id, req_status):
        self.correlation_id = correlation_id
        self.req_status = req_status

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "req_status:\n"
        ret_str += str(self.req_status) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespStageFileDownloadParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    req_status = peer_struct.req_status
    return RespStageFileDownloadParams(correlation_id, req_status)

def app_to_peer_RespStageFileDownloadParams(app_struct):
    return antaris_api_pb2.RespStageFileDownloadParams(correlation_id = app_struct.correlation_id, req_status = app_struct.req_status)

## @class: ReqPayloadPowerControlParams
## @brief: Request parameters for Payload Power Control
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: power_operation                                 :    Power operation : Power-Off (0), Power-On (1)   
class ReqPayloadPowerControlParams:
    def __init__(self, correlation_id, power_operation):
        self.correlation_id = correlation_id
        self.power_operation = power_operation

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "power_operation:\n"
        ret_str += str(self.power_operation) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_ReqPayloadPowerControlParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    power_operation = peer_struct.power_operation
    return ReqPayloadPowerControlParams(correlation_id, power_operation)

def app_to_peer_ReqPayloadPowerControlParams(app_struct):
    return antaris_api_pb2.ReqPayloadPowerControlParams(correlation_id = app_struct.correlation_id, power_operation = app_struct.power_operation)

## @class: RespPayloadPowerControlParams
## @brief: Response parameters for Payload Power Control request
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: req_status                                      :    status of payload-power-control request         
class RespPayloadPowerControlParams:
    def __init__(self, correlation_id, req_status):
        self.correlation_id = correlation_id
        self.req_status = req_status

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "req_status:\n"
        ret_str += str(self.req_status) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespPayloadPowerControlParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    req_status = peer_struct.req_status
    return RespPayloadPowerControlParams(correlation_id, req_status)

def app_to_peer_RespPayloadPowerControlParams(app_struct):
    return antaris_api_pb2.RespPayloadPowerControlParams(correlation_id = app_struct.correlation_id, req_status = app_struct.req_status)

## @class: RespShutdownParams
## @brief: Response parameters for application shutdown request from PC
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: req_status                                      :    status of payload application shutdown request  
class RespShutdownParams:
    def __init__(self, correlation_id, req_status):
        self.correlation_id = correlation_id
        self.req_status = req_status

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "req_status:\n"
        ret_str += str(self.req_status) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespShutdownParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    req_status = peer_struct.req_status
    return RespShutdownParams(correlation_id, req_status)

def app_to_peer_RespShutdownParams(app_struct):
    return antaris_api_pb2.RespShutdownParams(correlation_id = app_struct.correlation_id, req_status = app_struct.req_status)

## @class: RespHealthCheckParams
## @brief: Response parameters for Health Check request
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: application_state                               :    Application State : Good (0), Error (non-Zero)  
## @param: reqs_to_pc_in_err_cnt                           :    Number of requests to PC that faced error       
## @param: resps_to_pc_in_err_cnt                          :    Number of responses to PC that faced error      
class RespHealthCheckParams:
    def __init__(self, correlation_id, application_state, reqs_to_pc_in_err_cnt, resps_to_pc_in_err_cnt):
        self.correlation_id = correlation_id
        self.application_state = application_state
        self.reqs_to_pc_in_err_cnt = reqs_to_pc_in_err_cnt
        self.resps_to_pc_in_err_cnt = resps_to_pc_in_err_cnt

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "application_state:\n"
        ret_str += str(self.application_state) + "\n"
        ret_str += "reqs_to_pc_in_err_cnt:\n"
        ret_str += str(self.reqs_to_pc_in_err_cnt) + "\n"
        ret_str += "resps_to_pc_in_err_cnt:\n"
        ret_str += str(self.resps_to_pc_in_err_cnt) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_RespHealthCheckParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    application_state = peer_struct.application_state
    reqs_to_pc_in_err_cnt = peer_struct.reqs_to_pc_in_err_cnt
    resps_to_pc_in_err_cnt = peer_struct.resps_to_pc_in_err_cnt
    return RespHealthCheckParams(correlation_id, application_state, reqs_to_pc_in_err_cnt, resps_to_pc_in_err_cnt)

def app_to_peer_RespHealthCheckParams(app_struct):
    return antaris_api_pb2.RespHealthCheckParams(correlation_id = app_struct.correlation_id, application_state = app_struct.application_state, reqs_to_pc_in_err_cnt = app_struct.reqs_to_pc_in_err_cnt, resps_to_pc_in_err_cnt = app_struct.resps_to_pc_in_err_cnt)

## @class: StartSequenceParams
## @brief: Parameters for Start-Sequence Callback
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: sequence_id                                     :    app-defined sequence-id for payload application to execute
## @param: sequence_params                                 :    app-defined sequence parameters corresponding to the sequence-id
## @param: scheduled_deadline                              :    Epoch time till this sequence is allowed to run 
class StartSequenceParams:
    def __init__(self, correlation_id, sequence_id, sequence_params, scheduled_deadline):
        self.correlation_id = correlation_id
        self.sequence_id = sequence_id
        self.sequence_params = sequence_params
        self.scheduled_deadline = scheduled_deadline

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "sequence_id:\n"
        ret_str += str(self.sequence_id) + "\n"
        ret_str += "sequence_params:\n"
        ret_str += str(self.sequence_params) + "\n"
        ret_str += "scheduled_deadline:\n"
        ret_str += str(self.scheduled_deadline) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_StartSequenceParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    sequence_id = peer_struct.sequence_id
    sequence_params = peer_struct.sequence_params
    scheduled_deadline = peer_struct.scheduled_deadline
    return StartSequenceParams(correlation_id, sequence_id, sequence_params, scheduled_deadline)

def app_to_peer_StartSequenceParams(app_struct):
    return antaris_api_pb2.StartSequenceParams(correlation_id = app_struct.correlation_id, sequence_id = app_struct.sequence_id, sequence_params = app_struct.sequence_params, scheduled_deadline = app_struct.scheduled_deadline)

## @class: ShutdownParams
## @brief: Callback parameters notifying Application of imminent shutdown
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
## @param: grace_time                                      :    grace time in seconds after which the VM will be powered down
class ShutdownParams:
    def __init__(self, correlation_id, grace_time):
        self.correlation_id = correlation_id
        self.grace_time = grace_time

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"
        ret_str += "grace_time:\n"
        ret_str += str(self.grace_time) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_ShutdownParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    grace_time = peer_struct.grace_time
    return ShutdownParams(correlation_id, grace_time)

def app_to_peer_ShutdownParams(app_struct):
    return antaris_api_pb2.ShutdownParams(correlation_id = app_struct.correlation_id, grace_time = app_struct.grace_time)

## @class: HealthCheckParams
## @brief: HealthCheck message
## @param: correlation_id                                  :    correlation id for matching requests with responses and callbacks
class HealthCheckParams:
    def __init__(self, correlation_id):
        self.correlation_id = correlation_id

    def __str__(self):
        ret_str = ""
        ret_str += "correlation_id:\n"
        ret_str += str(self.correlation_id) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_HealthCheckParams(peer_struct):
    correlation_id = peer_struct.correlation_id
    return HealthCheckParams(correlation_id)

def app_to_peer_HealthCheckParams(app_struct):
    return antaris_api_pb2.HealthCheckParams(correlation_id = app_struct.correlation_id)

## @class: CmdSequenceDoneParams
## @brief: Parameters for Command Sequence Done notification to Payload Controller
## @param: sequence_id                                     :    sequence id that has completed execution. MUST agree with StartSequenceParams.sequence-id.
class CmdSequenceDoneParams:
    def __init__(self, sequence_id):
        self.sequence_id = sequence_id

    def __str__(self):
        ret_str = ""
        ret_str += "sequence_id:\n"
        ret_str += str(self.sequence_id) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_CmdSequenceDoneParams(peer_struct):
    sequence_id = peer_struct.sequence_id
    return CmdSequenceDoneParams(sequence_id)

def app_to_peer_CmdSequenceDoneParams(app_struct):
    return antaris_api_pb2.CmdSequenceDoneParams(sequence_id = app_struct.sequence_id)

## @class: AntarisApiCallbackFuncList
## @brief: Callback-functions registration structure for channel creation
## @param: start_sequence                                  :    callback handler for start-sequence             
## @param: shutdown_app                                    :    callback handler for shutdown-app               
## @param: process_health_check                            :    callback handler for health-check request from PC
## @param: process_response_register                       :    callback handler for registration response      
## @param: process_response_get_current_location           :    callback handler for current-location response  
## @param: process_response_stage_file_download            :    callback handler for stage file download response
## @param: process_response_payload_power_control          :    callback handler for payload power control response
class AntarisApiCallbackFuncList:
    def __init__(self, start_sequence, shutdown_app, process_health_check, process_response_register, process_response_get_current_location, process_response_stage_file_download, process_response_payload_power_control):
        self.start_sequence = start_sequence
        self.shutdown_app = shutdown_app
        self.process_health_check = process_health_check
        self.process_response_register = process_response_register
        self.process_response_get_current_location = process_response_get_current_location
        self.process_response_stage_file_download = process_response_stage_file_download
        self.process_response_payload_power_control = process_response_payload_power_control

    def __str__(self):
        ret_str = ""
        ret_str += "start_sequence:\n"
        ret_str += str(self.start_sequence) + "\n"
        ret_str += "shutdown_app:\n"
        ret_str += str(self.shutdown_app) + "\n"
        ret_str += "process_health_check:\n"
        ret_str += str(self.process_health_check) + "\n"
        ret_str += "process_response_register:\n"
        ret_str += str(self.process_response_register) + "\n"
        ret_str += "process_response_get_current_location:\n"
        ret_str += str(self.process_response_get_current_location) + "\n"
        ret_str += "process_response_stage_file_download:\n"
        ret_str += str(self.process_response_stage_file_download) + "\n"
        ret_str += "process_response_payload_power_control:\n"
        ret_str += str(self.process_response_payload_power_control) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_AntarisApiCallbackFuncList(peer_struct):
    start_sequence = peer_struct.start_sequence
    shutdown_app = peer_struct.shutdown_app
    process_health_check = peer_struct.process_health_check
    process_response_register = peer_struct.process_response_register
    process_response_get_current_location = peer_struct.process_response_get_current_location
    process_response_stage_file_download = peer_struct.process_response_stage_file_download
    process_response_payload_power_control = peer_struct.process_response_payload_power_control
    return AntarisApiCallbackFuncList(start_sequence, shutdown_app, process_health_check, process_response_register, process_response_get_current_location, process_response_stage_file_download, process_response_payload_power_control)

def app_to_peer_AntarisApiCallbackFuncList(app_struct):
    return antaris_api_pb2.AntarisApiCallbackFuncList(start_sequence = app_struct.start_sequence, shutdown_app = app_struct.shutdown_app, process_health_check = app_struct.process_health_check, process_response_register = app_struct.process_response_register, process_response_get_current_location = app_struct.process_response_get_current_location, process_response_stage_file_download = app_struct.process_response_stage_file_download, process_response_payload_power_control = app_struct.process_response_payload_power_control)

## @class: AntarisReturnType
## @brief: Wrapper structure for AntarisReturnCode
## @param: return_code                                     :    return code                                     
class AntarisReturnType:
    def __init__(self, return_code):
        self.return_code = return_code

    def __str__(self):
        ret_str = ""
        ret_str += "return_code:\n"
        ret_str += str(self.return_code) + "\n"

        return ret_str

    def display(self):
        print(str(self))

def peer_to_app_AntarisReturnType(peer_struct):
    return_code = peer_struct.return_code
    return AntarisReturnType(return_code)

def app_to_peer_AntarisReturnType(app_struct):
    return antaris_api_pb2.AntarisReturnType(return_code = app_struct.return_code)


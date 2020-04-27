/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef PLC4C_READ_H_
#define PLC4C_READ_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "plc4c/types.h"

/**
 * Actually executes the read-request.
 * @param connection connection this read-request will be executed on.
 * @param read_request the read-request object.
 * @param read_request_execution pointer to a data-structure handling one execution of the read-request.
 * @return return_code
 */
return_code plc4c_read_request_execute(plc4c_connection *connection,
                                       plc4c_read_request *read_request,
                                       plc4c_read_request_execution **read_request_execution);

bool plc4c_read_request_finished_successfully(plc4c_read_request_execution *read_request_execution);

bool plc4c_read_request_has_error(plc4c_read_request_execution *read_request_execution);

plc4c_read_response *plc4c_read_request_get_response(plc4c_read_request_execution *read_request_execution);

void plc4c_read_request_destroy(plc4c_read_request *read_request);

void plc4c_read_request_execution_destroy(plc4c_read_request_execution *read_request_execution);

#ifdef __cplusplus
}
#endif
#endif //PLC4C_READ_H_
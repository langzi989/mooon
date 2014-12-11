/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: eyjian@qq.com or eyjian@gmail.com
 */
#ifndef MOOON_SCHEDULER_SESSION_BASE_H
#define MOOON_SCHEDULER_SESSION_BASE_H
#include "distributed_object_base.h"
SCHED_NAMESPACE_BEGIN

class CSessionBase: public CDistributedObjectBase
{
private:
    virtual bool on_user_message(const TDistributedMessage* message);
    virtual bool on_request(const TDistributedMessage* message);
    virtual bool on_response(const TDistributedMessage* message);
    virtual bool on_timer(const TDistributedMessage* message);
    virtual bool on_create_session(const TDistributedMessage* message);
    virtual bool on_destroy_session(const TDistributedMessage* message);
};

SCHED_NAMESPACE_END
#endif // MOOON_SCHEDULER_SESSION_BASE_H

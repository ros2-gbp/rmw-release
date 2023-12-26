// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW__SUBSCRIPTION_OPTIONS_H_
#define RMW__SUBSCRIPTION_OPTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rmw/types.h"

// For now, the rmw_subscription_options_t type is still defined in "rmw/types.h".

/// Return a rmw_subscription_options_t initialized with default values.
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_subscription_options_t
rmw_get_default_subscription_options(void);

#ifdef __cplusplus
}
#endif

#endif  // RMW__SUBSCRIPTION_OPTIONS_H_

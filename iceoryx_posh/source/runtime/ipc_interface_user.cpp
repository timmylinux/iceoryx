// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
// Copyright (c) 2020 - 2021 by Apex.AI Inc. All rights reserved.
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
//
// SPDX-License-Identifier: Apache-2.0

#include "iceoryx_posh/internal/runtime/ipc_interface_user.hpp"

namespace iox
{
namespace runtime
{
IpcInterfaceUser::IpcInterfaceUser(const RuntimeName_t& name,
                                   const DomainId domainId,
                                   const ResourceType resourceType,
                                   const uint64_t maxMessages,
                                   const uint64_t messageSize) noexcept
    : IpcInterfaceBase(name, domainId, resourceType, maxMessages, messageSize)
{
    openIpcChannel(PosixIpcChannelSide::CLIENT);
}
} // namespace runtime
} // namespace iox

// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
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

#include "iceoryx_posh/internal/popo/receiver_handler.hpp"

namespace iox
{
namespace popo
{
ThreadSafe::ThreadSafe()
{
}
void ThreadSafe::lock()
{
    m_mutex.lock();
}
void ThreadSafe::unlock()
{
    m_mutex.unlock();
}

void SingleThreaded::lock()
{
}

void SingleThreaded::unlock()
{
}


} // namespace popo
} // namespace iox

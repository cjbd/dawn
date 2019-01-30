// Copyright 2018 The Dawn Authors
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

#ifndef DAWNNATIVE_D3D12BACKEND_H_
#define DAWNNATIVE_D3D12BACKEND_H_

#include <dawn/dawn_wsi.h>
#include <dawn_native/DawnNative.h>

#include <windows.h>

namespace dawn_native { namespace d3d12 {
    DAWN_NATIVE_EXPORT dawnSwapChainImplementation CreateNativeSwapChainImpl(dawnDevice device,
                                                                             HWND window);
    DAWN_NATIVE_EXPORT dawnTextureFormat
    GetNativeSwapChainPreferredFormat(const dawnSwapChainImplementation* swapChain);
}}  // namespace dawn_native::d3d12

#endif  // DAWNNATIVE_D3D12BACKEND_H_

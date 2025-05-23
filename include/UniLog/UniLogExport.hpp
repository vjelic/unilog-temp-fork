/*
 * Copyright 2019 Xilinx, Inc.
 * Copyright 2022 - 2024 Advanced Micro Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#pragma once

#if defined(_MSC_VER)
#if UNILOG_USE_DLL == 1
#ifdef UNILOG_EXPORT
#define UNILOG_DLLESPEC __declspec(dllexport)
#else
#define UNILOG_DLLESPEC __declspec(dllimport)
#endif
#else
#define UNILOG_DLLESPEC
#endif
#else
#define UNILOG_DLLESPEC __attribute__((visibility("default")))
#endif

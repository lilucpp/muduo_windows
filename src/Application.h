// Use of this source code is governed by a BSD-style license
// that can be found in the License file.
//
// Author:Lu Li (lilucpp at gmail dot com)

#ifndef PEANUT_BASE_APPLICATION_H
#define PEANUT_BASE_APPLICATION_H

#include <string>
#ifdef _WIN32
#include <windows.h>  //GetModuleFileNameW
#else
#include <limits.h>
#include <unistd.h>  //readlink
#endif

namespace peanut {
std::string GetApplicationPath();
std::string GetApplicationDir();

std::wstring GetApplicationPathW();
std::wstring GetApplicationDirW();

}  // namespace peanut

#endif  // PEANUT_BASE_APPLICATION_H
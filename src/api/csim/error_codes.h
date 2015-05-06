/*
Copyright 2015 University of Auckland

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.Some license of other
*/

#ifndef CSIM_ERROR_CODES_H_
#define CSIM_ERROR_CODES_H_

#include "csim/csim_export.h"

//! Everything in CSim is in this namespace.
namespace csim {

enum ErrorCodes
{
    CSIM_OK = 0,
    UNABLE_TO_LOAD_MODEL_URL = 1,
    UNKNOWN_ERROR = -1
};

}  // namespace csim

#endif  // CSIM_ERROR_CODES_H_
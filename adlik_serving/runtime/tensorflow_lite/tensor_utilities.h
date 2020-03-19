// Copyright 2019 ZTE corporation. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#ifndef ADLIK_SERVING_RUNTIME_TENSORFLOW_LITE_TENSOR_UTILITIES_H
#define ADLIK_SERVING_RUNTIME_TENSORFLOW_LITE_TENSOR_UTILITIES_H

#include "absl/types/span.h"
#include "tensorflow/core/framework/tensor.pb.h"
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/lib/core/status.h"
#include "tensorflow/lite/c/c_api_internal.h"

namespace adlik {
namespace serving {
tensorflow::DataType tfLiteTypeToTfType(TfLiteType tfLiteType);
TfLiteType tfLiteTypeToTfType(tensorflow::DataType dataType);
}  // namespace serving
}  // namespace adlik

#endif  // ADLIK_SERVING_RUNTIME_TENSORFLOW_LITE_TENSOR_UTILITIES_H
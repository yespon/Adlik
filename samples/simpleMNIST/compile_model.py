# Copyright 2019 ZTE corporation. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0

"""
This is a mnist sample which compile keras h5 model to tf serving/openvino/tensorrt model.
The request of compiling model must match config_schema.json
"""
import os

import model_compiler


def _main():
    base_dir = os.path.dirname(__file__)
    request = {
        "serving_type": "tf",  # or openvino, tensorrt
        "input_model": os.path.join(base_dir, "./model/mnist.h5"),
        "export_path": os.path.join(base_dir, "model_repos"),
        "input_layer_names": [
            "conv2d_1"
        ],
        "output_layer_names": [
            "dense_2"
        ],
        "input_formats": [
            "channels_last"
        ],
        "input_signatures": [
            "image"
        ],
        "output_signatures": [
            "label"
        ],
        "model_name": "mnist",
        "max_batch_size": 128
    }

    result = model_compiler.compile_model(request)
    print(result)


if __name__ == "__main__":
    _main()

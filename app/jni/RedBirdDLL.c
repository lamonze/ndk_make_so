//
// Created by lamon on 2020/3/12.
//

#include "RedBirdDLL.h"
#include "fastlz.h"

int Compress(const void* input, int length, void* output) {
    return fastlz1_compress(input, length, output);
}

int DeCompress(const void* input, int length, void* output,
                       int maxout) {
                       return fastlz1_decompress(input, length, output, maxout);
                       }
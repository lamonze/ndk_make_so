//
// Created by lamon on 2020/3/12.
//

#ifndef MY_APPLICATION_REDBIRDDLL_H
#define MY_APPLICATION_REDBIRDDLL_H

#if defined(__cplusplus)
extern "C" {
#endif

int DeCompress(const void* input, int length, void* output, int maxout);

int Compress(const void* input, int length, void* output);

#if defined(__cplusplus)
}
#endif

#endif //MY_APPLICATION_REDBIRDDLL_H

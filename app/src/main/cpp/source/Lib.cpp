//
// Created by anju on 11/6/18.
//

#include "../include/Lib.h"

extern "C"
   JNIEXPORT jstring JNICALL
Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringLib(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello C++";
    return env->NewStringUTF(hello.c_str());
}


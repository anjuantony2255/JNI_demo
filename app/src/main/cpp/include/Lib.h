//
// Created by opentrends-004 on 12/6/18.
//

#ifndef JNI_DEMO_LIB_H
#define JNI_DEMO_LIB_H
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringLib(
        JNIEnv* env,
        jobject /* this */);

#endif //JNI_DEMO_LIB_H

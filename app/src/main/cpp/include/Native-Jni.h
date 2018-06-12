//
// Created by opentrends-004 on 12/6/18.
//

#ifndef JNI_DEMO_NATIVE_JNI_H
#define JNI_DEMO_NATIVE_JNI_H
#include <string>
#include <jni.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringNativeJNI(
        JNIEnv* env,
        jobject /* this */);


#endif //JNI_DEMO_NATIVE_JNI_H

//
// Created by anju on 12/6/18.
//

#ifndef NATIVE_JNI_H
#define NATIVE_JNI_H
#include <string>
#include <jni.h>

extern "C"
   JNIEXPORT jstring JNICALL
   Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringNativeJNI(JNIEnv* env, jobject );

#endif //JNI_DEMO_NATIVE_JNI_H

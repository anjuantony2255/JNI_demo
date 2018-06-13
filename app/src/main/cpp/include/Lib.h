//
// Created by anju on 12/6/18.
//

#ifndef LIB_H
#define LIB_H
#include <jni.h>
#include <string>

extern "C"
  JNIEXPORT jstring JNICALL
  Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringLib(JNIEnv* env, jobject);

#endif //JNI_DEMO_LIB_H

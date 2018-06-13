//
// Created by anju on 12/6/18.
//

#ifndef NATIVE_LIB_H
#define NATIVE_LIB_H
#include <string>
#include <jni.h>
#include "../include/JniClass.h"

class StringFromJni{

    JNIEXPORT jstring JNICALL
    Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringFromJNI( JNIEnv* env, jobject );

};

#endif //JNI_DEMO_NATIVE_LIB_H


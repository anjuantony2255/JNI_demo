//
// Created by anju on 12/6/18.
//


#ifndef JNI_DEMO_H
#define JNI_DEMO_H
#include <string>
#include <jni.h>
#include "../include/JniClass.h"

class StringJni {

    JNIEXPORT jstring JNICALL
    Java_com_example_opentrends_1004_jni_JniActivity_stringJNI(JNIEnv* env, jobject );
};
#endif //JNI_DEMO_HELLOWORLD_H




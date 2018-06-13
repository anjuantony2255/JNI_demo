//
// Created by anju on 8/6/18.
//


#include "../include/HelloJni.h"

extern "C"
    JNIEXPORT jstring JNICALL
    Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringFromJNI(JNIEnv* env, jobject)
    {

        JniClass* jniClass = new JniClass();
        std::string hello = jniClass->StringFromJni();
        delete  jniClass;
        return env->NewStringUTF(hello.c_str());

    }

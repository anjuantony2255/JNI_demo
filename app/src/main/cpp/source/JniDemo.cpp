//
// Created by opentrends-004 on 8/6/18.
//


#include "../include/JniDemo.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opentrends_1004_jni_JniActivity_stringJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string haii = "haiii  welcome !!!!";
    return env->NewStringUTF(haii.c_str());

}

//
// Created by anju on 8/6/18.
//

#include "../include/JniDemo.h"

extern "C"
   JNIEXPORT jstring JNICALL
   Java_com_example_opentrends_1004_jni_JniActivity_stringJNI(JNIEnv* env, jobject /* this */)
   {
       JniClass* jniClass = new JniClass();
       std::string haii = jniClass->StringJni();
       delete jniClass;
       return env->NewStringUTF(haii.c_str());
  }


//
// Created by anju on 8/6/18.
//

#include "../include/Native-Jni.h"


extern "C"
  JNIEXPORT jstring JNICALL
  Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringNativeJNI(JNIEnv* env, jobject)
  {
      std::string hello = "Hello from C++";
      return env->NewStringUTF(hello.c_str());
  }

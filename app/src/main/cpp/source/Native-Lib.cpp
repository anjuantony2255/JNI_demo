#include "../include/Native-Lib.h"


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_opentrends_1004_jni_1demo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

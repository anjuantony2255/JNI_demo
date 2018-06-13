//
// Created by anju on 13/6/18.
//
//
#ifndef JNICLASS_H
#define JNICLASS_H
#include <string>
#include <jni.h>

class JniClass {

public:
    std::string StringFromJni();
    std::string StringJni();
};

#endif //JNI_DEMO_JNICLASS_H

//
// Created by user on 2019-11-22.
//
#include <Calculator.h>

#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jint JNICALL Java_com_example_helloworldjni_MainActivity_getSum
(JNIEnv *env, jobject thiz, jint num1, jint num2) {

return num1 + num2;
}
#ifdef __cplusplus
}
#endif
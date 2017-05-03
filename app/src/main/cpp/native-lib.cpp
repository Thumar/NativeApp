#include <jni.h>
#include <string>
#include "PrimeNumber.h"

extern "C"

/*function name : Java_+_{package name}_+{class name}_+{function name}  */
JNIEXPORT jboolean JNICALL Java_com_app_androidkt_nativeapp_MainActivity_isPrime(JNIEnv *env, jobject,jint num) {

    PrimeNumber primeNumber(num);
    return primeNumber.isPrime();
}

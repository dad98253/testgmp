#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_net_kuras_1sea_testgmp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from test gmp";
    return env->NewStringUTF(hello.c_str());
}

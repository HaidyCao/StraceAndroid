#include <jni.h>
#include <string>
#include <cstdio>
#include <syscall.h>
#include <sys/uio.h>
#include <unistd.h>
#include <android/log.h>
#include <sys/prctl.h>

//extern "C" int strace_main(int argc, char *argv[]);

extern "C" JNIEXPORT jstring JNICALL
Java_app_android_strace_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

//    int pid = getpid();
//
//    int f = fork();
//    if (f == 0) {
//        __android_log_print(ANDROID_LOG_DEBUG, __FILE_NAME__, "parent pid = %d", pid);
//        prctl(PR_SET_NAME, "strace", NULL, NULL, NULL);
//        char ppid[64];
//        sprintf(ppid, "%d", pid);
//        char *args[] = {
//                "strace", "-p", ppid, NULL
//        };
//        strace_main(3, args);
//    } else {
//        __android_log_print(ANDROID_LOG_DEBUG, __FILE_NAME__, "sub pid = %d", f);
//    }

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
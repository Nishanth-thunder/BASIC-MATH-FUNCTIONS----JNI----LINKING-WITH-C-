#include <jni.h>
#include<iostream>
#include "hello.h"
#include<cmath>
using namespace std;
JNIEXPORT void JNICALL Java_hello_mathfunc
  (JNIEnv *, jobject){

    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<sqrt(a);
    cout<<round(a);
    cout<<log(a);
    cout<<abs(a);
    cout<<exp(a);
    cout<<fabs(a);
    return;
  }
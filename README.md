# BASIC-MATH-FUNCTIONS----JNI----LINKING-WITH-C-
BASIC MATH FUNCTIONS -- JNI -- LINKING WITH C++
JNI is defined as Java Native Interface as in this interface we would be able to connect c++ or C function
to the java program using Dynamic link library and header file.

# Step 1:
Create a java file and Java program.
Example- public class ex1 {  // Save as ex1.java
   static {
      System.loadLibrary("ex1"); // Load native library ex1.dll (Windows) 
                                   // This library contains a native method called ex1()
   }
 
   // Declare an instance native method ex1() which receives no parameter and returns void
   private native void ex_A();
 
   // Test Driver
   public static void main(String[] args) {
      new ex1().ex_A();  // Create an instance and invoke the native method
   }
}

# Step 2:
Compile the java program and run the following commands to generate class( for our reference ) and headerfile for c/c++.
command - javac -h . HelloJNI.java
The class and header file is generated.

# Step 3:
Create a C/C++ program file and code.
Example - // Save as "ex1.c"
#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "ex1.h"   // Generated
 
// Implementation of the native method ex_A()
JNIEXPORT void JNICALL Java_ex1_ex_A(JNIEnv *env, jobject thisObj) {
   printf("HII! THIS IS MY EX 1!\n");
   return;
}
# Step 4:
Go to MINGW64 - In Github, Click that and download. It will download as a JAR file. Download Winrar and extract the JAR file.

# Step 5:
Enter this MINGW64 path in environment variables of the system.

# Step 6:
Open cmd and verify by typing the command g++ --version/gcc --version

# Step 7:
Enter the command in cmd to generate DLL ..gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o ex1.dll ex1.c   - For C program if you type in C.
g++ -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o ex1.dll ex1.c

# Step 8:
Now move the dll file to the folder which you have your java file.

# Step 9:
Compile the java code. If you have any error on version criteria kindly check your mingw version. If you did not got any error, the output of the c/c++ program should be displayed in the Java console.

# Advantages
1. This is a model which comes under Integrative programming where we can integrate programming languages so its so helpful in trending tech domains and so on.
2. This model can make you to understand about IPT clearly.

So folks... Happy coding!😃

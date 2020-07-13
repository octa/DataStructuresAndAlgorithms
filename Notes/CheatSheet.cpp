#include<iostream>
#include "Log.h"

int incrementUsingPointer(int* x);
int incrementUsingReference(int& x);

int mainCheatSheet() {

    /* Header Start */
    // Header Files - They only contain definition and not the actual declaration. Consider them as import statements in Java and Javascript although they really aren't.
    // Example #include<Log.h>. Log.h has the definition only. The actual implementation is in Log.cpp. Will have to use the #include pre-processor directive to include it and use it in this file.

    int a = 1;
    Log(a);

    /* Header End*/

    /* ifndef Start */
    // This can be used in header files and cpp files to only include header definitions once. For example, look at Log.h. Will make sure the code it contains within it is only defined once. Used to avoid compiler/linker errors.
    // Easy way to do it is use the newer #pragma once pre-processor directive.
    /* ifndef end */

    /* Pointers Start */
    //Pointers are nothing but an integer value, that is all. The value being the memory address of something that it points to.

    int x = 1;
    int* xh = &x; //integer pointer that points to the memory address of x

    std::cout << xh << std::endl; //prints the value of x which is also the value of the memory address where x is stored.

    std::cout << *xh << std::endl; // This is called de-referencing. Getting back the value that the pointer is pointing to. This will print 1 which is the value of x.

    // Double pointers - Pointers that point to a pointer.

    int b = 1;
    int* b2 = &b; // Pointer to b
    int** b3 = &b2; //Pointer to another pointer b2

    /* Pointers End */

    /* References Start */

    // Easy way to use instead of pointers in a few cases. They are nothing but aliases and are not new variables and not stored in memory.
    // Examples to use is to avoid pointers in some cases, mainly passing by reference.

    // Using pointers - incrementUsingPointer(int x)

    int c = 1;

    std::cout << incrementUsingPointer(&c) << std::endl;

    // Using references - incrementUsingReference(int x)

    std::cout << incrementUsingReference(c) << std::endl;

    /* References End */

    return 0;

}

int incrementUsingPointer(int* x) {

    return ++(*x);

}

int incrementUsingReference(int& x) {

    return ++x;

}
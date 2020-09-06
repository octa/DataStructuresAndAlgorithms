//
// Created by 8h on 8/23/20.
//

#include <iostream>

struct User {
    int age;
    int id;
};

int main() {

    // *********************** Pointers ***********************

    char c[ ] = {'x', 'a', 'c'};
    char* p = c;
    char* q = &c[1];

    int x = 10;
    int* y = &x;

    std::cout << p[0] << q[0] << std::endl;

    std::cout << c[2] << p[2] << q[2];

    // *********************** Pointers ***********************

    // *********************** Struct ***********************

    User* user = new User;
    user->id=10;
    user->age=10;

    std::cout << user->id << user->age <<std::endl;

    User user2;
    user2.age=15;
    user2.id=15;

    std::cout << user2.id << user2.age << std::endl;

    User *user3;
    user3 = (User*)malloc(sizeof(User));
    user3->id=24;
    user3->age=24;

    std::cout << user3->id << user3->age <<std::endl;

    //Struct - https://stackoverflow.com/questions/32577808/how-to-create-a-new-instance-of-a-struct-in-c

    User user4 = {100, 100};

    std::cout << user4.id << user4.age <<std::endl;

    //Accessing fields within a Struct if you have a pointer to the struct
    user->id;
    (*user).id;

    //Destroy an object allocated through "new" and return the memory to the free store.
    delete user; //The delete operator should only be applied to objects that have been allocated through new.

    // *********************** Struct ***********************

    // *********************** Array creation using new ***********************

    //Arrays can also be allocated with new. When this is done, the system allocator returns a pointer to the first element of the array.
    char* buffer = new char[500]; // allocate a buffer of 500 chars
    buffer[3] = 'a'; // elements are still accessed using [ ]
    delete [] buffer; // delete the buffer

    // *********************** Array creation using new ***********************



}


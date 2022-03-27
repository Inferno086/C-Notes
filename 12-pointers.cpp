#include<iostream>
using namespace std;

/*Pointers in C++
The pointer in C++ language is a variable, it is also known as locator
or indicator that points to an address of a value.
A pointer is a data type which holds the address of other data type.
The “&” operator is called “address off" operator, and the "*”
operator is called “value at” dereference operator.*/

/*In a way, reference variable is similar to having a pointer that 
always points to the same thing. One key difference is that references
do not require dereferencing in the same way that pointers do; you
just treat them as normal variables. A second difference is that when
you create a reference to a variable, you need not do anything special
to get the memory address. The compiler figures this out for you*/

int main(){

    int a = 5;
    int& y = a;
    int* b = &a; // This is how we declare pointer variable b
    int** c;
    c= &b;
    int* &x = b; // Reference pointer variable x for pointer variable b
    cout<<b<<endl;
    cout<<&a<<endl; //Print address of a which is equal to b
    cout<<&y<<endl; //Print address of y which is equal to b
    cout<<c<<endl;
    cout<<&b<<endl; //Print address of b which is equal to c
    cout<<*x<<endl;
    cout<<*b<<endl;
    cout<<**c<<endl;

    return 0;
}
#include<iostream>
using namespace std;

/*Call by Value in C++
Call by value is a method in C++ to pass the values to the function
arguments. In case of call by value the copies of actual parameters
are sent to the formal parameter, which means that if we change the
values inside the function that will not affect the actual values. */
void swapValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

/*Call by Pointer in C++
A call by the pointer is a method in C++ to pass the values to the function
arguments. In the case of call by pointer, the address of actual parameters
is sent to the formal parameter, which means that if we change the values 
inside the function that will affect the actual values.*/
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*Call by Reference in C++
Call by reference is a method in C++ to pass the values to the function 
arguments. In the case of call by reference, the reference of actual 
parameters is sent to the formal parameter, which means that if we change 
the values inside the function that will affect the actual values.*/
void swapReference(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4 , y = 7;
    swapValue(x,y); // Call by value
    cout<<x<<y<<endl;
    swapPointer(&x,&y); // Call by pointer 
    cout<<x<<y<<endl;
    swapReference(x,y); // Call by reference
    cout<<x<<y<<endl;

    return 0;
}

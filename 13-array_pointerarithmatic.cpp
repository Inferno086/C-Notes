#include<iostream>
using namespace std;

/*What are Arrays in C++
An array is a collection of items which are of the similar type stored in
contiguous memory locations.
Sometimes, a simple variable is not enough to hold all the data.
For example, let’s say we want to store the marks of 2500 students;
initializing 2500 different variable for this task is not feasible.
To solve this problem, we can define an array with size 2500 that can
hold the marks of all students.
For example int marks[2500];*/

int main(){

    int marks[5];
    marks[0] = 91;
    marks[1] = 97;
    marks[2] = 94;
    marks[3] = 99;
    marks[4] = 81;
    cout<<"Array marks: ";// The name of the Array is the address of index 0 element
    cout<<marks<<endl;
    cout<<"Size of array: ";
    cout<<sizeof(marks)<<endl;
    cout<<"Size of first element: ";
    cout<<sizeof(marks[0]);
    cout<<"Addresses of all index of array marks: "<<endl;
    cout<<&marks[0]<<endl;
    cout<<&marks[1]<<endl;
    cout<<&marks[2]<<endl;
    cout<<&marks[3]<<endl;
    cout<<&marks[4]<<endl;

    /*Pointers and Arrays
    Storing the address of an array into pointer is different than storing
    the address of a variable into the pointer because the name of the array
    is an address of the first index of an array. So to use ampersand "&" with
    the array name for assigning the address to a pointer is wrong.

    &Marks --> Wrong
    Marks --> address of the first block*/

    // Making a pointer for an array
    // int* arr1 = &marks; WRONG X
    int* arr1 = marks; //As the name of the Array is the address of index 0 element
    cout<<&marks[0]<<endl;
    cout<<&marks<<endl;
    cout<<arr1<<endl;
    cout<<arr1[1]<<endl;

    // Value can also be printed in this way
    cout<<*arr1<<endl;
    cout<<*(arr1+1)<<endl;
    cout<<*(arr1+2)<<endl;
    cout<<*(arr1+3)<<endl;
    cout<<*(arr1+4)<<endl;


    return 0;
}
#include<iostream>
using namespace std;

/*These are the topics which we are going to cover in this tutorial:

Reference Variables
Typecasting*/

int main(){

    // Reference Variables
    /*Reference variables can be defined as another name for an already
    existing variable. These are also called an alias.*/
    int sum = 455;
    int &add = sum; // & is used to make a reference variable
    cout<<sum<<endl;
    cout<<add<<endl;
    // If we change the value of add, value of sum also changes
    add = 200;
    cout<<sum<<endl;
    cout<<add<<endl;
    sum = 355;
    cout<<sum<<endl;
    cout<<add<<endl;

    // TYPECASTING - Typecasting can be defined as converting one data type into another.
    int a = 45;
    float b = 45.46;
    int c = int(b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<int(b)<<endl;
    cout<<(int)b<<endl;
    cout<<(float)a<<endl;
    cout<<float(a)<<endl;
    cout<<c<<endl;

    return 0;
}
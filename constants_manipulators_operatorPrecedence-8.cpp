#include<iostream>
#include <iomanip> //For setw()
using namespace std;

/*In this C++ tutorial, the topics which we are going to cover today are given below:

Constants in C++
Manipulator in C++
Operator Precedence in C++*/

int main(){

    /*Constants in C++
    Constants are unchangeable; when a constant variable is initialized
    in a program, its value cannot be changed afterwards.*/
    const float y = 3.11;
    
    /*Manipulator
    In C++ programming, language manipulators are used in the formatting of output.
    The two most commonly used manipulators are: "endl" and "setw".

    "endl" is used for the next line.
    "setw" is used to specify the width of the output.*/
    int a = 2, b = 23, c = 2343;
    cout<<"a without setw()"<<a<<endl;
    cout<<"b without setw()"<<b<<endl;
    cout<<"c without setw()"<<c<<endl;
    cout<<"a with setw()"<<setw(4)<<a<<endl;
    cout<<"b with setw()"<<setw(4)<<b<<endl;
    cout<<"c with setw()"<<setw(4)<<c<<endl;

    /*Operator Precedence & Operator Associativity

    Operator precedence helps us to solve an expression. For example, in an expression
    "int c = a*b+c" the multiplication operator's precedence is higher than the precedence
    of addition operator, so the multiplication between "a & b" first and then addition
    will be performed.

    Operator associativity helps us to solve an expression; when two or more operators
    have the same precedence, the operator associativity helps us to decide that we
    should solve the expression from "left-to-right" or from "right-to-left".*/
    cout<<(5*6+39-28/2)<<endl;

    return 0;
}
#include<iostream>
using namespace std;

/*Functions in C++
Functions are the main part of top-down structured programming. We break
the code into small pieces and make functions of that code. Functions help
us to reuse the code easily.*/

// Parameters
/*Formal Parameters
The variables which are declared in the function are called a formal parameter.
Actual Parameters
The values which are passed to the function are called actual parameters.*/

int sum(int a, int b){ // a and b represent required parameters
    int c = a + b;
    return c; // Function return sum of a and b
}

// FUNCTION PROTOTYPES
/*The function prototype is the template of the function which tells the
details of the function e.g(name, parameters) to the compiler. Function 
prototypes help us to define a function after the function call.*/

//int multiply(int a, b); This is not correct
//int multiply(int a, int b); CORRECT
int multiply(int,int); // This tells compiler that the function exists somewhere
//The function is defined at the end of the program

int main(){
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"\nEnter num2: ";
    cin>>num2;
    //Function call sum
    cout<<"\nThe sum of num1 and num2 is "<<sum(num1,num2)<<endl;

    // Call function multiply
    cout<<"\nThe product of num1 and num2 is "<<multiply(num1,num2)<<endl;

    return 0;
}

int multiply(int a, int b)
{
    int c = a*b;
    return c;
}
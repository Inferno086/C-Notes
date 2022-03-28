#include<iostream>
using namespace std;

/*Inline Functions in C++
Inline functions are used to reduce the function call. When one function
is being called multiply times in the program it increases the execution 
time, so inline function is used to reduce time and increase program 
efficiency. If the inline function is being used when the function is 
called, the inline function expands the whole function code at the point
of a function call, instead of running the function. Inline functions are
considered to be used when the function is small otherwise it will not 
perform well. Inline is not recommended when static variables are being 
used in the function.*/
/*Static variables in a Function: When a variable is declared as static, 
space for it gets allocated for the lifetime of the program. Even if the
function is called multiple times, space for the static variable is
allocated only once and the value of variable in the previous call
gets carried through the next function call.*/

inline int multiply(int a, int b){
    return a*b;
}

/*Default Arguments in C++
Default arguments are those values which are used by the function if we
don’t input our value. It is recommended to write default arguments
after the other arguments. */
int sum(int a, int b = 0){
    return (a+b);
}

/*Constant Arguments in C++
Constant arguments are used when you don’t want your values to be changed
or modified by the function. */
int a(const char p){
    return 0;
}

int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"\nProduct is "<<multiply(num1,num2);
    cout<<"\nSum is "<<sum(num1);
    return 0;
}

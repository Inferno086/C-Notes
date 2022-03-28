#include<iostream>
using namespace std;

/*Recursion and Recursive Function
When a function calls itself it is called recursion and the function 
which is calling itself is called a recursive function. The recursive 
function consists of a base case and recursive condition. It is very 
important to add a base case in recursive function otherwise recursive 
function will never stop executing.*/
int factorial(int);
int iterativeFactorial(int);
int fib(int);

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<factorial(num)<<endl;
    cout<<iterativeFactorial(num)<<endl;
    return 0;
}

int factorial(int a)
{
    if (a != 1){
        return (a*factorial((a-1)));
    }
    else{
        return 1;
    }
}

int iterativeFactorial(int a){
    int c = 1;
    for(int i = a; i > 1; i--){
        c = (c*i);
    }
    return c;
}

// 1 1 2 3 5 8 13 21 34 ...... Fibonacci Series
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}


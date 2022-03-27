#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    /*The sign "<<" is called insertion operator
    The sign ">>" is called extraction operator
    "cout" keyword is used to print
    "cin" keyword is used to take input at run time.*/
    cout<<"Enter the value of first number: "<<endl;
    cin>>num1;
    cout<<"Enter the value of second number: "<<endl;
    cin>>num2;
    cout<<"The sum is "<<num1 + num2;

    return 0;
}
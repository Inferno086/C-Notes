#include<iostream>
using namespace std;

/*Loops in C++
Loops are block statements, which keeps on repeatedly executing until
a specified condition is met. There are three types of loops in C++:

-For loop in C++
-While loop in C++
-Do While in C++*/

int main(){

    /*For Loop in C++
    For loop help us to run some specific code repeatedly until the
    specified condition is met.*/

    for(int i=0; i<4;i++){
        cout<<i<<endl;
    }

    /*As shown, we created for loop, and inside its condition,
    there are three statements separated by a semicolon. The 1st statement
    is called “initialization”, the 2nd statement is called “condition”,
    and the 3rd statement is called “updation". After that, there is a
    loop body in which code is written, which needs to be repeated.  
    Here is how our for loop will be executed:
    -Initialize integer variable “i” with value “0”
    -Check the condition if the value of the variable "i” is smaller than “4”
    -If the condition is true go into loop body and execute the code
    -Update the value of “i” by one
    -Keep repeating this step until the condition gets false
    
    The init step is executed first, and only once. This step allows you to
    declare and initialize any loop control variables. You are not required
    to put a statement here, as long as a semicolon appears.

    Next, the condition is evaluated. If it is true, the body of the loop is
    executed. If it is false, the body of the loop does not execute and flow
    of control jumps to the next statement just after the for loop.

    After the body of the for loop executes, the flow of control jumps back
    up to the increment statement. This statement can be left blank, as long
    as a semicolon appears after the condition.

    The condition is now evaluated again. If it is true, the loop executes and
    the process repeats itself (body of loop, then increment step, and then
    again condition). After the condition becomes false, the for loop terminates.*/

    /*While Loop in C++
    While loop helps us to run some specific code repeatedly until the
    specified condition is met.*/

    int x = 1;
    while(x<=30){
        cout<<x<<endl;
        x++;
    }

    /*As shown, we created a while loop, and inside its condition, there is one 
    statement. The statement is called "condition”. Here is how our while loop
    will be executed:

    Initialize integer variable “x” with value “1”
    Check the condition if the value of the variable "i” is smaller or equal to "30."
    If the condition is true to go into loop body and execute the code
    Update the value of “x” by one
    Keep repeating this step until the condition gets false.*/

    /*Do-While Loop in C++
    The do-while loop helps us to run some specific code repeatedly until a
    specified condition is met.*/

    int i = 0;
    do{
        cout<<i;
        i++;
    }while(i<=20);

    /*As shown in figure 4, we created a do-while loop, and the syntax of the
    do-while loop is like write body with "do” keyword and at the end of body
    write “while" keyword with the condition. Here is how our do-while loop
    will be executed:

    Initialize integer variable “i” with value “1”
    Go into loop body and execute the code
    Check the condition if the value of the variable "i" is smaller or equal to "40”
    If the condition is true - go into loop body and execute the code
    Keep repeating this step until the condition gets false*/

    return 0;
}
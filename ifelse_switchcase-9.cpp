#include<iostream>
using namespace std;

/*In this C++ tutorial, the topics which we are going to cover today are given below:

Control Structures in C++
IF Else in C++
Switch Statement in C++*/

/*Control Structures in C++
The work of control structures is to give flow and logic to a program.
There are three types of basic control structures in C++.

Sequence Structure
Sequence structure refers to the sequence in which program execute instructions
one after another.

Selection structure
It refers to the execution of instruction according to the selected condition,
which can be either true or false. There are two ways to implement selection
structures, by “if-else statements” or by “switch case statements”.

Loop Structure
Loop structure refers to the execution of an instruction in a loop until
the condition gets false. */

int main(){
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // Selection control structure: If else-if else ladder
    /* In if-else if-else block, only one condition is executed, rest 
    are ignored*/
    
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    /*Switch Case Statements in C++
    In switch-case statements, the value of the variable is tested with all the cases.
    When the variable being switched on is equal to a case, the statements following
    that case will execute until a break statement is reached.
    A switch statement can have an optional default case, which must appear at the
    end of the switch. The default case can be used for performing a task when
    none of the cases is true. No break is needed in the default case.*/
    int num;
    cout<<"Enter a number for switch case: ";
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<"You entered 1"<<endl;
        break;
    case 2:
        cout<<"You entered 2"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}
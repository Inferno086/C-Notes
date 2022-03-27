#include<iostream>
using namespace std;

/*In this C++ tutorial, the topics which we are going to cover today are given below:

Break Statements in C++
Continue Statements in C++*/

int main(){

    // Break statements in loops are used to terminate the loop.
    /*A break statement in a loop (if the break is not part of a switch case)
    always breaks out of only the loop in which the break is executed. If the
    break appears inside a nested loop, the break causes us to leave that
    nested (inner) loop. There are no exceptions to this rule.*/
    
    for(int i = 0; i <=30; i++){
        cout<<i;
        if (i == 12){
            cout<<endl;
            break; 
            
        }
    }

    /*Continue statements are somewhat similar to break statements. The main
    difference is that the break statement entirely terminates the loop, but
    the continue statement only terminates the current iteration.*/
    for(int i = 0; i <= 5; i++){
        if(i==3){
            continue;
        }
        cout<<i;
    }
    return 0;
}


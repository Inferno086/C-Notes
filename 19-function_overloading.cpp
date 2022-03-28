#include<iostream>
using namespace std;

/*Function Overloading in C++
Function overloading is a process to make more than one function with 
the same name but different parameters, numbers, or sequence. 
Overloaded functions may or may not have different return types but 
they must have different arguments.*/

// Volume of cube
int volume(int a){
    return (a*a*a);
}

// Volume of Cylinder
float volume(float a, float h){
    return (3.14*a*a*h);
}

// Volume of cuboid
float volume(float a, float b, float c){
    return (a*b*c);
}


int main(){
    cout<<volume(2.0)<<endl;
    cout<<volume(2.1,3)<<endl;
    cout<<volume(2.1,2.2,2.3)<<endl;
    return 0;
}

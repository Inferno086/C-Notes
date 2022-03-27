#include<iostream>
using namespace std;

/*"#include" is used in C++ to import header files in our C++ program.
The reason to introduce the "<iostream>" header file into our program
is that functions like "cout" and "cin" are defined in that header file.

There are two types of header files:

System Header Files
System header files ships with the compiler. For example, “#include <iostream>”.

User-Defined Header Files
The programmer writes User-defined header files himself. To include your header
file in the program, you first need to make a header file in the current directory,
and then you can add it.*/


int main(){
    int a = 4, b =5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    /*The function "a+b", will add a and b values and print them.
    The function "a-b "will subtract a and b values and print them.
    The function "a*b" will multiply a and b values and print them.
    The function "a/b ", will divide a and b values and print them.
    The function "a%b ", will take the modulus of a and b values and print them.
    The function "a++" will first print the value of a and then increment it by 1.
    The function "a--", will first print the value of a and then decrement it by 1.
    The function "++a", will first increment it by one and then print its value.
    The function "--a", will first decrement it by one and then print its value.*/
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is: "<<a-b<<endl;
    cout<<"The value of a * b is: "<<a*b<<endl;
    cout<<"The value of a / b is: "<<a/b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of ++a b is: "<<++a<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of --a is: "<<--a<<endl;

    /*-->The function "(a==b)", will compare a and b values and check if they are equal.
    The output will be one if equal, and 0 if not.
    -->The function "(a!=b)", will compare a and b values and check if "a" is not equal to "b".
    The output will be one if not equal and 0 if equal.
    -->The function "(a>=b)", will compare a and b values and check if "a" is greater than or
    equal to "b". The output will be one if greater or equal, and 0 if not.
    -->The function "(a<=b)", will compare a and b values and check if "b" is greater than or
    equal to "a". The output will be one if greater or equal, and 0 if not.
    -->The function "(a>b)", will compare a and b values and check if "a" is greater than "b".
    The output will be one if greater and 0 if not.
    -->The function "(a<b)", will compare a and b values and check if "b" is greater than "a".
    The output will be one if greater and 0 if not.*/
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<"The value of a != b is: "<<(a!=b)<<endl;
    cout<<"The value of a > b is: "<<(a>b)<<endl;
    cout<<"The value of a < b is: "<<(a<b)<<endl;
    cout<<"The value of a >= b is: "<<(a>=b)<<endl;
    cout<<"The value of a <= b is: "<<(a<=b)<<endl;

    /*LOGICAL OPERATORS
    -The function "((a==b)&& (a<b))" will first compare a and b values and check if they are
    equal or not; if they are equal, the next expression will check whether "a" is smaller
    than "b". The output will be one if both expressions are true and 0 if not.
    -The function "((a==b) || (a<b))", will first compare a and b values and check if they
    are equal or not, even if they are not equal it will still check the next expression 
    ie whether "a" is smaller than "b" or not. The output will be one if any one of the
    expressions is true and 0 if both are false.
    -The function "(!(a==b))", will first compare a and b values and check if they are
    equal or not. The output will be inversed ie if "a" and "b" are equal; the output
    will be 0 and 1 otherwise.*/
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 
    return 0;
}
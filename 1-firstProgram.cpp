#include<iostream>

int main(){
    
    // This is our first program

    /*The code "std::cout" tells the compiler that the 
    "cout" identifier resides in the std namespace.*/
    // :: is the scope resolution operator
    std::cout<<"Hello World!";

    /*"return 0" - In this line of code, the return keyword
    will return 0 as an integer to our main function "int main()"
    as we have discussed before.Returning 0 as a value to the main
    function means successful termination of the program.*/
    return 0;
}
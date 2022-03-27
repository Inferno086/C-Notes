#include<iostream>
using namespace std;

int glo = 6; //Global Variable glo

void sum(){
    // This function prints the value of glo
    int a;
    cout<<glo<<endl;
}

int main(){
    float pi = 3.14;
    bool is_true = true;
    char x = 'h';
    double z = 1.123236;
    // DATA TYPES
    /*
    Built-in Data Types
    Int-> Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
    Float-> Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
    Char-> Char is used to store a single character e.g. ('a', 'b',' c', 'd')
    Boolean-> Boolean is used to store "true" or "false."
    Double-> Double is also used to store decimal numbers but has more precision
    than float, e.g. (10.5895758440339...)

    double is the default type given to a  decimal literal (34.4 is double by default
    and not float), so to use it as float, you have to specify it like "34.4F," as
    shown. To display the size of float, double, and long double literals,
    we have used a "sizeof" operator
    
    User Defined:
    Structures
    Enums
    Unions

    Derived Data Types
    Pointer
    Array
    Function
    */

    /*The SCOPE OF A VARIABLE is the region in the program where
    the existence of that variable is valid.
    Local variables:
    Local variables are declared inside the braces of any function and
    can be assessed only from there. 

    Global variables:
    Global variables are declared outside any function and can be accessed
    from anywhere.*/

    /*When we call the sum function, it uses glo variable. It first looks
    inside the sum function for the glo variable. As there is no glo 
    defined in the sum function, it looks for it in the global scope 
    and prints that value.
    When we cout in the main function, it first looks for glo in the
    main function and as we have defind glo as 78 in the main function,
    it prints that value.*/

    

    // ************* Float, double and long double Literals****************
    float d=34.4F;
    long double e = 34.4L; 
    // sizeof() is used to find the size of items
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    /*To access the value of the global variable "glo", we use scope
    resolution operator "::" with the "glo" variable.*/
    int a = 5, glo = 78;
    sum();
    cout<<glo<<endl;
    cout<<::glo;
    return 0;
}
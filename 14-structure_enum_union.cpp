#include<iostream>
using namespace std;

// In this tutorial, we will discuss structures, unions & enums in C++

/*Structures in C++
The structure is a user-defined data type that is available in C++.
Structures are used to combine different types of data types, just 
like an array is used to combine the same type of data types.*/
struct employee
{
    int ID;
    char favChar;
    float salary;
};

int main(){

    // How to create instance of structure?
    struct employee Arjun;
    Arjun.ID = 123;
    Arjun.favChar = 'a';
    Arjun.salary = 1234.3;
    cout<<Arjun.ID<<endl;
    cout<<Arjun.favChar<<endl;
    cout<<Arjun.salary<<endl;
    /*As shown in Code Snippet, 1st we have created a structure variable
    “Arjun” of type “employee”, 2nd we have assigned values to
    (eId, favchar, salary) fields of the structure employee and
    at the end we have printed the value of “salary”.*/

    // How to create structure variables without using name and struct keyword?
    typedef struct car
    {
        int topSpeed;
        float capacity;
        char engineType;
    }c;

    c baleno; // We dont need to use struct and name of structure to create variable ;)
    baleno.topSpeed = 200;
    baleno.capacity = 20.5;
    baleno.engineType = 'a';

    //UNIONS
    /*Unions in C++
    Unions are similar to structures but they provide better memory management
    then structures.  Unions use shared memory so only 1 variable can be used
    at a time.*/
    /*The main thing to note here is that:

    -We can only use 1 variable at a time otherwise the compiler will give
    us a garbage value
    -The compiler chooses the data type which has maximum memory for the allocation*/
    union student
    {
        int studentID;
        char grade;
    };

    // Creating an instance of union 
    // Once we use any variable in a union, we cannot define another one
    // It is either studentID or grade...
    union student harry;
    harry.grade = 'a';
    // harry.studentID = 20; 
    cout<<"The size of union harry is "<<sizeof(harry)<<endl;
    cout<<harry.grade<<endl;
    // cout<<harry.studentID<<endl;

    // ENUMS
    // An enumeration is a user-defined data type that consists of integral 
    // constants. To define an enumeration, keyword enum is used.
    // By default the value is given as 0 1 ans 2.
    // We can give different constants to each member of an enum
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    Meal m2 = breakfast;
    Meal m3 = dinner;
    cout<<(m1==2);
    cout<<(m1);
    cout<<(m2);
    cout<<(m3);
    
    return 0;
}
//recap1.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    pointers
    arrays
    typedef
    structures, union and enum
*/

#include<iostream>
using namespace std;

typedef int avi;
// now we can use 'avi' instead of 'int' wherever we want.  

struct emp
{
    // in structures, all members are public, and in these, 'methods'(functions) cant be made
    int eid;
    float sal;
    char name;
};
typedef emp another_name;

// union is just like structure, but the only difference is that in this, only one member can be
// used at a time. Hence it offers a better memory management i.e. occupies less space because memory
// is shared between the data members.
union money
{
    int rice;
    char car;
    double dollar;
};

enum meal
{
    breakfast, lunch, dinner        // now breakfast = 0, lunch = 1, dinner = 2
};

int main(){
    
    //pointers - variable which hold address of other variables
    int a = 3;
    int *b = &a;    // OR 'int* b = &a;' -> both the above notations are correct
    cout<<"Value of a = "<<a<<endl; 
    // cout<<"Value of *a = "<<(*a)<<endl;      // gives error
    cout<<"Value of &a = "<<(&a)<<endl;         // & -> 'address of' 
    cout<<"Value of b = "<<(b)<<endl;             // displays address of a (the value of pointer)
    cout<<"Value of *b = "<<(*b)<<endl;         // * -> 'value at' (dereferencing operator)
    cout<<"Value of &b = "<<(&b)<<endl;         // displays of the pointer variable

    int** c = &b;       // pointer to pointer. Here c is a pointer, which hold the address of pointer 
                        // variable b, which inturn holds the address of variable a.
    cout<<"Value of c = "<<c<<endl;         // prints the address of b
    cout<<"Value of *c = "<<*c<<endl;       // prints the value of c, i.e. address of b 
    cout<<"Value of &c = "<<&c<<endl;       // prints the address of c
    cout<<"Value of **c = "<<**c<<endl;     // double dereferencing - this displays the value of b

    // array is a contiguous memory allocation
    int d[] = {12, 24, 36, 48, 60};     //c++ automatically determines the size of the array in thi case, as it knows the exact size of it
    int e[5] = {10, 20, 30, 40, 50};
    int f[5];
    f[3] = 90;
    int size = 10;
    int arr[size];      // variable sized arrays can be made in c++
    char str1[10] = "Aviral";        // this is correct assignment and declaration of char array
    // char str2[10];
    // str2 = "Srivastava";     // this is not allowed
    
    //Here d, e, f or any other array just pointers, containing the address of the first element or array
    cout<<"Value of 'd' (int-array) is "<<d<<endl;      // this will display address of d[0] 
    cout<<"Value of '*d' (int-array) is "<<*d<<endl;      // this will display value at d[0] 
    cout<<"Value of '&d' (int-array) is "<<&d<<endl;      // this will display address of d[0] 

    cout<<"Value of d[1] is "<<d[1]<<endl;
    // cout<<"Value of ++d is "<<(++d)<<endl;           // gives error
    // cout<<"Value of *(++d) is "<<(*(++d))<<endl;     // gives error
    // cout<<"Value of &(++d) is "<<(&(++d))<<endl;     // gives error

    int* g = d;
    cout<<"g = "<<g<<" and &d[0] = "<<&d[0]<<endl;      // same output (address of d[0])
    cout<<"++g = "<<++g<<" and &d[1] = "<<&d[1]<<endl;      // same output (address of d[1])
    // address of ++d = address of d + size(int)

    avi h;      // same as 'int h;', as we have used typedef 
    h = 23;
    cout<<"var avi h = "<<h<<" is still just a normal int..."<<endl;

    emp e1;
    e1.eid = 11;
    e1.sal = 1200.5;
    e1.name = 'a';
    cout<<"Details of emp e1 are: "<<e1.eid<<","<<e1.sal<<","<<e1.name<<endl;

    another_name e2;        // again, result of using 'typedef'
    e2.eid = 12;
    e2.sal = 2200.59;
    e2.name = 'b';
    cout<<"Details of emp e2 are: "<<e2.eid<<","<<e2.sal<<","<<e2.name<<endl;

    money m1;
    m1.rice = 1234;
    cout<<"union money m1 is now: (rice)"<<m1.rice<<endl;
    m1.dollar = 345.81;
    cout<<"union money m1 is now: (rice)"<<m1.rice<<" and (dollar): "<<m1.dollar<<endl;     // this will give grabage value of rice because, dollar is the active member now. Rest all data members will be holding garbage value.
    cout<<"Size of union money = "<<sizeof(m1)<<endl;       // max of size of all data members of union money i.e. max of(int,char,double) = double(8);

    meal m2;
    m2 = breakfast;
    cout<<"enum meal m2 breakfast = "<<m2<<endl;
    m2 = lunch;
    cout<<"enum meal m2 lunch = "<<m2<<endl;
    m2 = dinner;
    cout<<"enum meal m2 dinner = "<<m2<<endl;
    cout<<"size of enum m2 = "<<sizeof(m2)<<endl;

    return 0;
}
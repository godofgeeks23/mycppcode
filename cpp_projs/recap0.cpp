//recap0.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    about the main() function
    meaning of 'namespace' 
    comments
    common escape sequences
    basic data types and their sizes
    variable declaration and assignment
    global and local variables
    variable naming rules
    taking user input
    type casting
    reference variables
    const keyword
    display formatting using setw from iomanip
    if-else
    switch-case 
    for loop
    while loop
    do-while loop
    various other short points
*/

#include<iostream>
#include<iomanip>
using namespace std;

// void main(){
//     cout<<"Hello world!";
//     return 0;
// }
//the above code will give an error because in modern c++, the main() must return 'int' only

// if the line 'using namespace std;' was not used, then every time we use cout/cin/or any other
// function from the standard library, we will have to use it like 'std::cout', 'std::cin', etc, i.e.
// will have to mention the scope of the function.  

/* this 
is
a
multi-line
comment. */

int f = 32;

int main(){
    cout<<"\tHello world!\n";

    // Basic data types in c++ and their sizes (64bit)  - 
    cout<<"int: "<<sizeof(int)<<" bytes";
    cout<<endl<<"float: "<<sizeof(float)<<" bytes";
    cout<<endl<<"double: "<<sizeof(double)<<" bytes";
    cout<<endl<<"char: "<<sizeof(char)<<" bytes";
    cout<<endl<<"bool: "<<sizeof(bool)<<" bytes";
    // the 'double' data type is basically just a more precise 'float'    

    int a,b,c=12,d=23;

    char e = 'avi';
    cout<<endl<<"e contains the value: "<<e;
    // this demonstrates that when we assign more than one characters to a char variable then the
    // last character only gets assigned to it.

    int f = 23;
    cout<<endl<<"The value of f is "<<f;
    // this  shows that precedence of the local variable is greator than the global var
    cout<<endl<<"The value of global f is "<<::f;
    // to access the global var, use the scope resolution operator '::'

    bool g = true;
    bool h = false;
    int i = 'x';
    cout<<endl<<"bool g = "<<g<<", and bool h = "<<h<<", and char i = "<<i;
    // in c++ char and bool are of basically 'int' data type

    // invalid varible names in c++
    // int a#12;        NOT SUPPORTED
    // int abcdefghijklkmnopqrstuvwxyz;     SUPPORTED
    // int _123abc;     SUPPORTED
    // int _bool;       SUPPORTED
    // int 23aviral;        NOT SUPPORTED

    // taking user input in c++ via the 'cin' in iostream
    int j;
    cout<<endl<<"Enter the value of the variable j: ";
    cin>>j;

    cout<<endl<<"The value of variable j mathches with 4? :"<<(j==4)<<endl;
    
    cout<<"size of value '3.14' is: "<<sizeof(3.14)<<endl;
    // the above will output value '8', as c++ takes decimal numbers as 'double' type by default
    cout<<"size of value '3.14f' or '3.14F' is: "<<sizeof(3.14F)<<endl;
    // now we have declared the above explicitly as a 'float'
    cout<<"size of value '3.14l' or '3.14L' is: "<<sizeof(3.14L)<<endl;
    // now we have declared the above explicitly as 'long double'

    // the concept of reference variables - 
    // reference variable is just another name of a existing variable. so accessing it by its
    // original name or is reference name is excatly the same
    float k = 2.714;
    float &l = k;
    cout<<"original variable is "<<k<<" and reference variable is "<<l<<endl;
    k = k + 1.00;
    cout<<"Now updating the original var's value..."<<endl;
    cout<<"original variable is "<<k<<" and reference variable is "<<l<<endl;
    l = l + 10.00;
    cout<<"Now updating the reference var's value..."<<endl;
    cout<<"original variable is "<<k<<" and reference variable is "<<l<<endl;

    // typecasting in c++ 
    float m = 98.99;
    cout<<"m = "<<m<<" , (int)m = "<<(int)m<<" , int(m) = "<<int(m)<<endl;

    const int n = 6790;

    // display formatting of data in c++
    cout<<"Displaying output without setw()..."<<endl;
    cout<<1<<endl<<12<<endl<<123<<endl<<1234<<endl<<12345<<endl;
    cout<<"And now using setw()..."<<endl;
    cout<<setw(5)<<1<<endl<<setw(5)<<12<<endl<<setw(5)<<123<<endl<<setw(5)<<1234<<endl<<setw(5)<<12345<<endl;

    // control structures in c++
    int age;
    cout<<"Enter your age in years - ";
    cin>>age;
    if(age>=18)
    {
        cout<<endl<<"You are eligible for voting in elections."<<endl;
    }
    else
    {
        cout<<"Oops! Grow a little first!"<<endl;
    }
    // now doing the same above example using switch-case
    cout<<"Now using switch-case - "<<endl;
    switch(age)
    {
        case 18:    cout<<"You are just on the edge but you can vote."<<endl;
                    break;
        case 16:    cout<<"Underage!"<<endl;
                    break;
        default:    cout<<"You are definitely eleigible to vote!"<<endl;
                    break;
    }
    // switch-case can only be used when testing for equality of specific values.
    // remember to use 'break' to jump out. If ignored, the program flow control will fall through
    // all the subsequent cases one by one.

    // for loop
    // for loop works in the following steps:
    // initialization -> condition -> body -> updation -> condition -> body -> updation ... 
    int o;
    for (o = 1; o < 11; o++)
    {
        cout<<"6x"<<o<<"="<<6*o<<endl;
    }
    cout<<"After exiting the for loop, now the value of loop variable is: "<<o<<endl;

    //while loop
    o = 1;
    cout<<"Now using the while loop:"<<endl;
    while(o<11)
    {
        cout<<"6x"<<o<<"="<<6*o<<endl;
        o++;
    }
    cout<<"After exiting the while loop, now the value of loop variable is: "<<o<<endl;

    //do-while loop - excatly similar to while loop, just it runs atleast once
    o=1;
    cout<<"Now using the do-while loop:"<<endl;
    do
    {
        cout<<"6x"<<o<<"="<<6*o<<endl;
        o++;
    }while(o<11);
    cout<<"After exiting the do-while loop, now the value of loop variable is: "<<o<<endl;

    if(o)
    {
        cout<<"variable o is not zero!"<<endl;
    }

    return 0;
}

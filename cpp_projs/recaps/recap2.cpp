//recap2.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    functions
    pass by value and pass by reference
    static members
    inline functions
    default arguments
    const arguments
    recursion
*/

#include<iostream>
using namespace std;

// function is a feature of 'top down structured programming'
int sum(int a, int b)       // this is an example of pass by value. Actual parameters are not changed in this. All the changes that occur are in the formal parameters as they contain the copied value of the actual parameters
{
    return a+b;
}

int sum(int, int, int);     // function prototype. ALSO this is function overloading (polymorphism). Function definition is mentioned at last.

void greet()
{
    cout<<"Hello Everyone"<<endl;
}

void swap_by_pointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

inline int product(int a, int b)        // inline function are very fast than traditional functions.
{
    return a*b;
}

int ap(int a)       // static variables are intialized only once (the first time the function is called). For every next call of the function, its value is retained like a global variable for the function.
{
    static int d = -1;
    d++;
    return a+d;    
}

float simple_interest(int p, int t, float r = 1.05)     // default argument in function. Define them at end of the arguments list, so that they can be skipped at the time of the function call
{
    float a = (p*r*t)/100;
    return a;
}

int mod2(const int a)       // declare a argument as const if you dont want it to be read only
{
    return (a%2);
}

int factorial(int a)        // using recursion to find the factorial of a number
{
    if(a<=1)
    {
        return 1;
    }
    return a*factorial(a-1);
}

int fibonacci(int a)        // using recursion to find the element of fibonacci series at ath position
{
    if(a<=2)
    {
        return 1;
    }
    return (fibonacci(a-1) + fibonacci(a-2));
}

int main(){
    greet();

    cout<<"34 + 43 = "<<sum(34,43)<<endl;
    cout<<"34 + 43 + 11 = "<<sum(34,43,11)<<endl;
    
    int x = 11, y = 22;
    cout<<"Currently, x = "<<x<<" , y = "<<y<<endl;
    swap_by_pointer(&x,&y);
    cout<<"After swap_by_pointer, x = "<<x<<" , y = "<<y<<endl;
    swap_by_reference(x, y);
    cout<<"After swap_by_reference, x = "<<x<<" , y = "<<y<<endl;
    
    cout<<"Product of 45x4 by inline function gives: "<<product(45, 4)<<endl;        // these are fast becuase at runtime, the code of the defined function is directly replaced here     
    
    cout<<ap(1)<<"\t"<<ap(1)<<"\t"<<ap(1)<<"\t"<<ap(1)<<"\t"<<ap(1)<<endl;

    // static variable can be used to count the number of times the function gets called

    cout<<"Amount on default rate for 1 year: "<<simple_interest(1000, 1)<<endl;
    cout<<"Amount on rate 2.02 for 1 year: "<<simple_interest(1000, 1, 2.02)<<endl;

    cout<<"23 mod 2 = "<<mod2(23)<<endl;

    cout<<"factorial of 10 is "<<factorial(10)<<endl;
    cout<<"10th element of fibonacci sereis is "<<fibonacci(10)<<endl;

    return 0;
}

int sum(int a, int b, int c)      // function definition
{
    return a+b+c;
}

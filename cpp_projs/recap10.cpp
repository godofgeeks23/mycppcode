//recap10.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    this pointer in cpp
    polymorphism and its types
    pointers to derived class
    virtual functions
*/

#include<iostream>
using namespace std;

class example
{
    int a;
    public:
        void setdata(int a)     // notice we are using the same name for real as well as copy variable
        {
            a = a;              // this won't work (no error, but a grabage value is stored in a), as precedence is higher for the local variable
            this->a = a;        // to get this working, we have to use 'this'
                                // 'this' is a special pointer in c++ which points to the object which is calling the member function
                                // so down below, when object 'e' is calling the function, then it will set it's 'a' equal to the provided 'a'
        }
        void showdata()
        {
            cout<<"value of a is "<<a<<endl;
        }
};

//  polymorphism - multiple forms of the same thing
/*  types of polymorphism - 
        1. compile time - (static/early binding) binding is done during compiling
            example: function overloading, operator overloading        
            (by binding, we mean that compiler chooses which function to run beforehand)
        2. run time - achieved by virtual functions (decided at runtime which function to use)
            no binding is done beforehand... and it is decided by the type of pointer used 
*/

//pointers to derived classes
class base
{
    public:
        int baseint = 16;
        void display()
        {
            cout<<"value of baseint is "<<baseint<<endl;
        }
};
class derived : public base
{
    public:
        int derint = 78;
        void display()
        {
            cout<<"value of derint is "<<derint<<endl;
        }
};

int main()
{
    example e;
    e.setdata(34);
    e.showdata();

    base *baseptr;          // we created a pointer of base class 
    derived derobj;         
    baseptr = &derobj;      // and we pointed that to the derived class - THIS IS VALID IN C++
    baseptr->display();     // here display() of base class will be executed, BECAUSE THE POINTER IS OF BASE CLASS
                            // this is called as 'late binding'
                            // anything we do with this pointer, it will correspond to the base class
    // to force it to use the display() of the derived class, we have to make the display() of base as 'virtual' function by - 
    // virtual void display { //code } 
    return 0;
}

//recap8.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    inheritance
    ambiguity resolution in inheritance
    virtual base class
    constructors in derived classes
    order of constructor invocation
    special syntax
*/

/*
inheritance is used to implement the reusablilty of the code
types of inheritance:
    single
    hierarchial - (example: a class gives birth to 2 new classes)
    multiple - (multiple base classes)
    multilevel
    hybrid = multiple + multilevel
*/
class class1
{
    public:
        int a;
}
class class2 : public class1        // syntax of inheritance
                                    // here 'public' is the visibility mode
                                    // defualt visibility mode is 'private'
{
    public:
        int b;
}
class class3
{
    public:
        int c;
}
class class4 : public class1, private class3    // syntax of multiple inheritance
{
    // code
}
/*
summary of inheritance - 
                                            (visibility mode)
(base class member)     public                  protected                   private

public                  public                  protected                   private
protected               protected               protected                   protected
private                 not accessible          not accessible              not accessible
                        (hidden)                (hidden)                    (hidden)
*/

#include<iostream>
using namespace std;
int main()
{
    return 0;
}

// ambiguity resolution in inheritance - when a similar named member is present in the derived as well as base class, then compiler faces an ambiguity and we need to resolve it 
/* example -

class base1
{
    public:
        void greet()
        {
            cout<<"from base 1";
        }
};
class base2
{
    public:
        void greet()
        {
            cout<<"from base 2";
        }
};
class base3:public base1, public base2
{
    public:
        void greet()
        {
            base2::greet();     // here we have the solved the ambiguity by specifying which function to use. If this was not present, and if we made an object of base3 and tried to call obj.greet(), then cpp compiler would have given error to us
        }
};

***** there is also another type of ambiguity which is resolved automatically by a rule...
consider this - 
class temp1
{
    public:
        void say()
        {
            cout<<"hello";
        }
};
class temp2:public temp1
{
    public:
        void say
        {
            cout<<"namaste";        // here, derived class overrides the inherited function, so ambiguity is automatically resolved here...
        }
};

Virtual base classes - solution of problem arising by multiple instances of same variable in a derived class 
---------------------- it occurs when a same variable is shared by more than one parent class and those parents create a derived class
example - 

class A has a var 'temp' ------> A derives class B and class C
now 'temp' is inherited in B as well as C
Now class D is derived from B,C (multiple inheritance)
Hence, D inherits a instance of 'temp' from B and another from C.

This is the ambiguity.
To resolve this, we declare A as a virtual base class to prevent duplication. Now D will have only one copy of the 'temp' var.
this is done as - 
    class B : virtual public A
    {
        //code
    }
    and 
    class C : virtual public A
    {
        //code
    }

Constructors in Inheritance -
------------------------------ 
if base class does not have a parametrized constructor then derived class does not need a constructor mandatorily
But if base class has a parametrized cosntructor, then derived class needs to pass orgs to the base class cosntructor

Order of Constructor Invocation - 
----------------------------------
base class -----> derived class

in multiple inheritance, order of delclaration of classes is followed

(!) constructor of the virtual base class is invoked before the non-virtual base class

again, if case of multiple virtual base classes, order of declaration is followed

Special Synatx for passing args to multiple base classes - 
------------------------------------------------------------
Example - 
class c1
{
    int temp1;
    public:
        c1(int a)
        {
            temp1 = a;
        }
};
class c2
{
    int temp2;
    int temp3;
    public:
        c2(int b, int c)
        {
            temp2 = b;
            temp3 = c;
        }
};
class c3 : public c1, public c2
{
    int temp4;
    public:
        c3(int x, int y, int z, int k) : c1(x), c2(y,z)     // special syntax
        {
            temp4 = k;
            cout<<"object created!";
        }
};
int main()
{
    c3 obj(23, 45, 67, 3);
    return 0;
}

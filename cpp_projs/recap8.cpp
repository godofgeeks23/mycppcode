//recap8.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    inheritance
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




//recap7.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    constructors and destructors
    initialisation list
*/

#include<iostream>
using namespace std;
class point
{
    int x, y;
    public:
        point() // constrcutor - special member function with same name as of class. runs automatically on object creation
                // here this is a default constructor as it takes no arguments
                // constructor doesn't have any return type or value.
                // should be declared in public section only of the class
                // we can't refer to its address
        {
            x = 0;
            y = 0;
            cout<<"defualt constructor invoked..."<<endl;
        }
        point(int, int);    // parametrized constructor
                            // constructor can also be declared inside - defined outside
                            // also, this is constructor overloading - multiple constructor of the same name and different arguments...
        // point(int a, int b = 10) // this gives error as it can't be overloaded with point(int, int)
        // {
        //     x = a;
        //     y = b;
        // }

        // point(point &temp)  // copy constructor - copies the contents of one object on another object to initialize it
        // {
        //     x = temp.x;
        //     y = temp.y;
        //     cout<<"copy constructor invoked..."<<endl;
        // }

        ~point()    // destructor - special member function of same name as the class
                    // runs automatically when the scope of the object is over to free the space in memory occupied by it
                    // it doesn't take any arguments and doesn;t have any return type                     
        {
            cout<<"object destroyed..."<<endl;
        }
};
// compiler decides dynamically which constructor to choose at the time of runtime 
point::point(int a, int b = 10)  // cosntructor defined outside of class
                                // this is a parametrized cosntructor with a defualt argument
{
    x = a;
    y = b;
    cout<<"parametrized constructor invoked..."<<endl;
}
class test      // for understanding initialisation lists
{
    int a;
    int b;
    public:
        test(int i, int j): a(i), b(j)  // for quick initialisation through constructors
                                        // can also use as - 
                                        // test(int i, int j): a(i), b(i+j)
                                        // test(int i, int j): a(i), b(a+j)
                                        //
                                        // BUT test(int i, int j): b(i), a(j) won't work as the order in which int a; int b; are declared in the class definition also matters! 
        {
            cout<<"Values have been assigned!"<<endl;
        }
};
int main()
{
    point p1;    // defualt constructor
                // as we have done constructor overloading... if here we wouldn;t have dclared the defualt cosntructor, then compiler will give error, as there would be no contructor to choose from
                // so, if constructor are overloaded, explicity make a defualt cosntructor if you want to create objects like this
    
    // ways of invoking a parametrized constructor
    point p2(10, 10);
    point p3(5);
    point p4 = point(12, 20);
    point p5 = point(18);

    // methods of invoking copy constructor
    // point p6(p2);
    // point p7 = p6;
    // the above lines will work even if a copy cosntructor was not explicitly declared... as cpp compiler automatcally assigns a defualt copy cosntructor to each class

    point p8;   
    p8 = p2;    // this is not a method of copy constructor... this creates the object using defualt cosntructor

    {
        point p9;   // p9 created using defualt cosntrcutor
    }   // p9 destroyed - as its scope is over

    test obj(12, 67);

    return 0;
}   // p1,p2,.... also destroyed...

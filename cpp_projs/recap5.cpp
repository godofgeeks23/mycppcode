//recap5.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    classes and objects (contd.)
    static data members and member functions
    array of objects
    objects as function arguments
    friend functions

*/

#include<iostream>
using namespace std;

class emp
{
    int eid;
    string ename;
    int salary;
    static int count;   // defualt is always zero... not garbage... DONT GIVE VALUE HERE
    public:
        static void getCount()  // static member function - can access ONLY static data members and memner functions
        {
            // eid = 12;    // error - as eid is not a static member
            cout<<count<<endl;
        }
        void setDetails()
        {
            cout<<"Enter the ID:";
            cin>>eid;
            cout<<"Enter first name:";
            cin>>ename;
            cout<<"Enter the salary:";
            cin>>salary;
        }
        void showDetails()
        {
            cout<<"ID:"<<eid<<"     Name:"<<ename<<"    Salary:"<<salary<<endl;
        }
        void mergeSalary(emp e1, emp e2) // objects of the same class used here... but different class objects can also be used...
        {
            salary = e1.salary + e2.salary; // same class objects can access private data (obviously)
        }
        friend void promoteSalary(emp e);   // FRIEND function can access private members of a class.
                                            // It can be declared under private/public section of the class
};
void promoteSalary(emp e)   // friend function can't access members directly by their names... and need object_name.member_name to access them
{
    e.salary= e.salary + 2000;
}
int emp::count; // shared by all the objects. It is a class variable (common to a whole class)
                // lifetime: same as whole program, scope: whole class
int main()
{
    emp::getCount();    // static member functions don't require a object to be called, as they are a property of a whole class, so call them by class name
    
    emp e[5];   // array of objects
    e[0].setDetails();
    e[1].setDetails();

    e[2].setDetails();
    e[2].mergeSalary(e[0], e[1]);
    e[2].showDetails();

    promoteSalary(e[2]);    // FRIEND FUNCTION IS NOT A MEMBER FUNCTION OF CLASS. So it will not be called via the object of the class
                            // It's not in the scope of the class.
    e[2].showDetails();

    

    return 0;
}

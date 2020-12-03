//recap3.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    classes and objects
*/

#include<iostream>
using namespace std;

class employee
{
    public:
        int working = 0;
        void set_details();     // function prototype here. can be declared outside class also 
        void get_details()
        {
            cout<<"Employee ID: "<<eid<<endl;
            cout<<"Employee Grade: "<<grade<<endl;
            cout<<"Employee Salary: "<<sal<<endl;
            cout<<"Employee Name: "<<ename<<endl;
        }
    private:        // by default class members are of private type
        int eid;
        char grade;
        float sal;
        string ename;
}e1, e2;        // one method of declaring global objects.

void employee::set_details()        // member function defined outside class in format: <return-type> <class-name>::<function-name> { <function code> }
{
    cout<<"Enter the Employee ID: ";
    cin>>eid;
    cout<<"Enter Employee's Name: ";
    cin>>ename;
    cout<<endl<<"Enter the Employee Grade: ";
    cin>>grade;
    cout<<endl<<"Enter the Employee's salary: ";
    cin>>sal;
    // calling one member function from inside another member function is 'nesting of member functions'
}

int main(){
    employee avi;
    avi.set_details();
    avi.get_details();
    avi.working = 1;        // public members can be directly accessed
    return 0;
}
//recap4.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    strings in c++
*/
#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;
    cout<<endl<<"The name "<<name<<" is "<<name.length()<<" characters long."<<endl;
    // in c++, string is considered without spaces only. So if value of 'name' is entered as 'aviral srivastava', it will store only 'aviral' and the length of the string will be 6 characters.
    cout<<name.at(2)<<endl;
    
    return 0;
}
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
    cout<<"Enter full name: ";
    cin>>name;
    cout<<"The name "<<name<<" is "<<name.length()<<" characters long."<<endl;
    // in c++, string is considered without spaces only. So if value of 'name' is entered as 'aviral srivastava', it will store only 'aviral' and the length of the string will be 6 characters.
    
    // to overcome this problem, use getline() as -
    cin.ignore();
    string name2; 
    cout<<"Now enter your full name: ";
    getline(cin, name2);
    cout<<"Hi "<<name2<<endl;
    
    cout<<name2.at(2)<<endl;
    
    

    return 0;
}
//recap11.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    file io in cpp
*/

/*
Basics about File IO
---------------------
file - a data pattern stored in a disk
streams - 
    input - for reading from the file
    ouptut - for writing into the file
useful ready-made classes for file io in cpp
    fstreambase - the base class
    ifstream - derived from the fstreambase
    ofstream - derived from the fstreambase

for file i/o, include the file 'fstream' to use it...
*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // writing to the file
    ofstream file1("sample_text2.txt");      // create a ofstream object for writing to the files
                                            // this is the constructor method of opening the file...
    string test = "this is to be written in the file...";
    file1<<test;                             // write to the file
    file1.close();                           // close the file for any read/write operation

    ofstream file2;
    file2.open("sample_text2.txt");         // second method of opening the file explicitly...
    file2<<"this file was openend by the second method...";
    file2.close();

    ofstream file3;
    file3.open("sample_text2.txt");         // NOTE that, when a file is opened like this for writing, previous content is erased and then started...
    file3.close();                          // here we didn't write anything after opening the file, so it will be blank after closing...

    //reading from the file
    string content;
    ifstream file4("sample_text1.txt");     // opening the file by the cosntructor method
    file4>>content;                         // we took the content from the file into our variable
    cout<<content<<endl;                    // note that this method reads word by word from a file...
    file4>>content;                         // this will store the NEXT word in the string, as after every read operation, the pointer moves to the forward position...
    cout<<content<<endl;

    getline(file4, content);                // this will read one line at a time, starting from the current position of the file pointer, till the next line...
    cout<<content<<endl;

    file4.close();

    ifstream file5;
    file5.open("sample_text1.txt");         // opened using the member function
    while(!file5.eof())                     // sample of how to read a complete file line by line till the end of file is reached...
    {
        getline(file5, content);
        cout<<content<<endl;
    }

    // getline()is from the <string> header file, but as fstream already inherits that file, so it gets automatically included during compilation
    // getline() requires two arguments... getline(<source>, <variable_to_store_it_in>);
    
    return 0;
}
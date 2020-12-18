//recap13.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    STL in c++
    vectors
    iterators - creation and using
    lists
*/

/*
STL is a a library of generic classes and functions

components of stl - 
    1. containers (store data... ex - vector, etc)
    2. algorithms (ex - sorting, searching, etc)
    3. iterators (objects pointing to an element in containers)
                    these are handled just like the pointers

why use stl - 
    don't reinvent the wheel

types of containers in stl - 
    1. sequential - stores data in linear fashion
                    ex - vector, list, dequeue (double ended queues)
    2. associative - data is stored like trees for faster search
                    ex - set, multiset, map, multimap
    3. derived - from sequential / associative containers for real world modelling
                    ex - stack, queues, priority queues

when to use which container - 
    1. vectors - faster random access, insertion/deletion is slow, insertion/deletion at the start/end is fast
    2. list - slow random access, insertion in the middle is fast
    3. associative container - except random access, everything is fast
    4. derived containers - depend on daily life needs
*/

#include<iostream>
#include<vector>            // include this to use the vector template
#include<list>              // include for list operations

using namespace std;

void display(vector<int> v)
{
    cout<<"now displaying the vector - "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<", ";
    }
    cout<<endl<<"finished displaying the vector."<<endl;
}

void showthelist(list<int> l)
{
    list<int>::iterator iter_temp;
    iter_temp = l.begin();
    cout<<"now displaying the list - "<<endl;
    while(iter_temp!=l.end())
    {
        cout<<*(iter_temp)<<" <--> ";
        iter_temp++;
    }
    cout<<"list finished"<<endl;
}

int main()
{
    vector<int> v1;         // created a zero length vector
    vector<int> v2(4);      // empty vector of length 4
    vector<int> v4(6, 3);   // create a vector of 6 elements of data 3

    v1.push_back(23);       // now the vector is: 23
    v1.push_back(31);       // now the vector is: 23, 31
    cout<<v1[0]<<endl;      // elements can be accessed as this also
    cout<<v1.at(1)<<endl;   // another way of accessing elements
    cout<<"the size of vector is "<<v1.size()<<endl;    // get the size of vector
    v1.pop_back();          // delete the last element
    cout<<v1[0]<<endl;      
    
    v1.push_back(12);
    v1.push_back(235);
    v1.push_back(90);
    v1.push_back(186);
    display(v1);
    
    // iterators - creation and using
    vector<int>::iterator iter1;
    iter1 = v1.begin();     // pointer pointing to the beginning of the vector
    cout<<*(iter1)<<endl;   // dereference the pointer
    iter1++;                // use just like the pointers
    *(iter1) = 90909;
    cout<<*(iter1)<<endl;

    v1.insert(iter1, 2096); // insert a element at the before the current iterator
    display(v1);
    v1.insert(iter1, 5, 999);   // insert 5 copies of 999 before the current iterator position
    display(v1);

    display(v4);

    // LISTS
    // list is a bidirectional list
    // some other examples of lists
    list<int> l1;         // created a zero length vector
    list<int> l5(4);      // empty vector of length 4
    list<int> l3(6, 3);   // create a vector of 6 elements of data 3

    l1.push_back(23);       // now the list is: 23
    l1.push_back(31);       // now the vector is: 23 <--> 31
    // cout<<l1[0]<<endl;      // on lists, this doesn't work as list is not a continous data allocation 
    // cout<<l1.at(1)<<endl;   // neither this can be used
    cout<<"the size of list is "<<l1.size()<<endl;    // get the size of list
    l1.pop_back();          // delete the last element  
    
    list<int>::iterator iter2;
    iter2 = l1.begin();     // pointer pointing to the beginning of the list
    cout<<*(iter2)<<endl;   // dereference the pointer
    iter2++;                // use just like the pointers
    *(iter2) = 90909;
    cout<<*(iter2)<<endl;

    // l1.insert(iter1, 2096); // doesn't work on lists

    l1.push_back(8);
    l1.push_back(88);
    l1.push_back(888);
    l1.push_back(88);
    l1.push_back(8);
    showthelist(l1);
    
    l1.remove(8);               // remove all the occurances of an element
    showthelist(l1);

    l1.sort();
    showthelist(l1);            // sort the list

    l1.reverse();
    showthelist(l1);

    list<int> l2;
    l2.push_back(1);
    l2.push_back(12);
    l2.push_back(123);
    l2.push_back(1234);
    l2.push_back(12345);
    l2.push_back(123456);
    showthelist(l2);
    l1.merge(l2);               // merge list l2 into list l1
    showthelist(l1);

    // for other methods / iterators, view cplusplus.com

    return 0;
}
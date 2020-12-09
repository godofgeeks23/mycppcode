//recap7.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    new and delete keywords
    objects and pointers
*/

#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
        void setdata(int a, int b)
        {
            x = a;
            y = b;
        }
        void showdata()
        {
            cout<<"The point is "<<x<<" , "<<y<<endl;
        }
};

int main()
{
    int *p = new int(40);       // dynamically allocating memory for a new int using 'new' keyword
    cout<<p<<"\t"<<*p<<endl;    // display address and value of the int
    delete p;                   // free space

    int *arr = new int[5];      // dynamically alloating space for an int array
    arr[0] = 10;
    arr[1] = 20;                // or: *(arr+1) = 20;
    arr[2] = 30;
    // delete arr;                 // now if we tried to display the values, then garbage value may be displayed
    delete[] arr;               // frees up the entire space occupied by the array
                                    // also noticethat both lines of 'delete' can't be used, as a space can;t be freed up twice!

    // pointer to objects
    point *coordinate = new point;
    (*coordinate).setdata(23, 890); // using parenthesis is a must here as precedence issues arise...
    (*coordinate).showdata();
    // another method of doing the above is -
    coordinate->setdata(56, 612);
    coordinate->showdata();

    // arrays of objects dynamically allocated
    point *set = new point[5];
    set->setdata(0, 0);
    set[0].showdata();              // this and above is the same thing
    // set[0]->showdata();          // gives error
    (set+1)->setdata(89, 5612);
    (set+1)->showdata();
    
    

    return 0;
}
//recap12.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    templates in c++
    templates with multiple parameters
    templates with default parameters
    function templates
    member functions and overloading template functions
*/

/*
A c++ template is also called as parametrized class
template -----> class -------> object

in this, we don't specify the data type of the members of class beforehand, instead we can pass any data type by just making a single template class
when the data type is provided, compiler automatically replaces the template-members by the exact data type

why to use c++ templates - 
    to follow DRY (dont repeat yourself) concept
    to do generic programming

hence, this concept saves us from making several similar classes with different data types 
*/

#include<iostream>

using namespace std;

template <class t>      // here we created class t as template. Now we can use 't' as a data type wherever we are not sure of a fixed data type
                        // now 't' can be any data type(int/float/etc).
                        // when type of 't' will be specified, compiler will replace all 't' with that data type
class sample1
{
    t var;
    public:
        void show()
        {
            cout<<"the value of var is "<<var<<endl;
        }
        void set(t temp)
        {
            var = temp;
        }
};

template <class anything, class everything>     // multiple parameters tempplates 
class sample2
{
    anything a;
    everything b;
    public:
        sample2(anything x, everything y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout<<"a is "<<a<<", and b is "<<b<<endl;
        }
};

template <class park = int, class zoo = float>     // multiple parameters tempplates 
class sample3
{
    park a;
    zoo b;
    public:
        sample3(park x, zoo y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout<<"a is "<<a<<", and b is "<<b<<endl;
        }
};

template <class wish>
double funcavg(wish w1, wish w2)        // template functions
{
    double temp = (w1+w2)/2.0;
    return temp;
}

int main()
{
    sample1<int> obj1;      // specify which data type is 't'
    obj1.set(12);
    obj1.show();

    sample1<char> obj2;
    obj2.set('b');
    obj2.show();

    sample2<float, char> obj3(12.678, 'l');
    obj3.show();

    sample3<> obj4(561, 67.21);     // use default arguments
    obj4.show();
    sample3<char, string> obj5('z', "very good");       // don't use default arguments
    obj5.show();
    sample3<int> obj6(89, 563.3);
    obj6.show();

    cout<<funcavg(2,4)<<endl;
    cout<<funcavg(2.6, 346.2)<<endl;

    

    return 0;
}

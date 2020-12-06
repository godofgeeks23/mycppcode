//recap6.cpp

/*
This is a single cpp file which aims to quickly revise all the previous studied cpp topics.
This contains some theory part, syntax, as well as some quick points which need to be remembered.
Have a quick glance at this file periodically or once in a while! 
*/

/*
The topics covered in this file are - 
    friend members and friend classes

*/

#include<iostream>
using namespace std;
class complex;
class calculator
{
    public:
        complex sum_complex(complex, complex);  // this is why we declared 'class complex' earlier to assure compiler that such a class exists...
                                                // here we created a function which returns a data type 'complex', of name 'sum_complex' and which takes two 'complex' objects as its input
};
class complex
{
    int real, cmp;
    friend complex calculator::sum_complex(complex, complex);   // here we make the above function as friend. that is why we declared class 'calculator' before this line
    // friend class calculator; // we could have also done this... by this we don;t need to declare individually as friend. By this, whole class 'calculator' has access to 'complex's' private members
    public:
        void set_details(int a, int b)
        {
            real = a;
            cmp = b;
        }
        void show_number()
        {
            cout<<real<<"+"<<cmp<<"i"<<endl;
        }
};
complex calculator::sum_complex(complex a, complex b)   // we write this definition outside the 'calculator' class because earlier compiler does't know that members 'real', 'cmp' exists ...
{
    complex result;
    result.real = a.real + b.real;
    result.cmp = a.cmp + b.cmp;
    return result;
}
int main()
{
    complex z1, z2;
    z1.set_details(2,2);
    z2.set_details(10,10);
    z1.show_number();
    z2.show_number();

    calculator calc;
    complex z3 = calc.sum_complex(z1, z2);
    z3.show_number();

    // a function can be friend of multiple classes at once also!

    return 0;
}
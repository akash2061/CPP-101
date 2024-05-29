#include <iostream>
using namespace std;

/*
class Demo
{
    int a, b;

public:
    Demo() // default constructor
    {
        cout << "Default Constructor" << endl;
    }
    Demo(int a, int b) : a(a), b(b) // parameterised constructor
    {
        cout << "parameterized constructor -values: " << a << " " << b << endl;
    }

} instance(5, 10); //! Intance is use for calling default constructor or with paremeter.
*/
class Demo1
{
    int a, b;

public:
    Demo1() // default constructor
    {
        cout << "Default Constructor of Demo1" << endl;
    }
    Demo1(int a, int b) : a(a), b(b) // parameterised constructor
    {
        cout << "parameterized constructor -values: " << a << " " << b << endl;
    }

} instance;

int main()
{
    return 0;
}

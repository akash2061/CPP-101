#include <bits/stdc++.h>
using namespace std;
class Geeks
{
public:
    int id;

    Geeks()
    {
        cout << "Default Constructor called" << endl;
        id = -1;
    }

    Geeks(int x)
    {
        cout << "Parameterized Constructor called " << endl;
        id = x;
    }
};
int main()
{

    Geeks obj1;
    cout << "Geek id is: " << obj1.id << endl;

    Geeks obj2(21);
    cout << "Geek id is: " << obj2.id << endl;
    return 0;
}

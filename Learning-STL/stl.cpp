#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }
    cout << "\nSize of Vector : " << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    v.resize(3);
    cout << "\nSize of Vector : " << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    if (v.empty() == false)
    {
        cout << "NOT-EMPTY" << endl;
    }
    else
    {
        cout << "EMPTY" << endl;
    }
    v.resize(5);
    for (auto x : v)
    {
        cout << x << " : " << &x << endl;
    }
    cout << endl;
    //! Iterator
    cout << "Iterator:" << endl;
    vector<int> a = {10,20,30,40,50};
    

    return 0;
}
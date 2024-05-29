#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <ranges>
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
    vector<int> a = {10, 20, 30, 40, 50};
    vector<int>::iterator ptr;
    for (ptr = a.begin(); ptr < a.end(); ptr++)
    {
        cout << *ptr << " : " << &ptr << endl;
    }

    cout << "\nSwap:" << endl;
    int b = 1, c = 3;
    cout << b << " : " << c << endl;
    swap(b, c);
    cout << b << " : " << c << endl;

    cout << "\nVector-Matrix:" << endl;
    vector<vector<int>> Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (const vector<int> &x : Matrix)
    {
        for (int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    cout << "\nList:" << endl;
    list<int> lst;
    lst.push_back(10);
    lst.push_front(5);
    lst.push_back(15);
    lst.push_front(0);

    cout << "List elements:" << endl;
    for (auto l : lst)
    {
        cout << l << endl;
    }

    cout << "List elements in reverse order:" << endl;
    for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit)
    {
        cout << *rit << endl;
    }
    return 0;
}
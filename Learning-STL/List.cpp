#include <bits/stdc++.h>
using namespace std;

void disp(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    cout << "Enter 5 Element to List:" << endl;
    for (int i = 0, x; i < 5; i++)
    {
        cin >> x;
        l.push_back(x);
    }

    cout << "List:" << endl;
    disp(l);
    return 0;
}
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

    cout << "Pop-Back & Pop-Front:" << endl;
    l.pop_back();
    l.pop_front();
    disp(l);

    cout << "Enter Element of List to be poped:" << endl;
    int x;
    cin >> x;
    l.remove(x);
    disp(l);
    cout << "Last Element of List:" << l.back();

    list<int> l2;
    cout << "\n\nEnter 5 Element to 2nd List:" << endl;
    for (int i = 0, x; i < 5; i++)
    {
        cin >> x;
        l2.push_back(x);
    }
    cout << "Sorted 2nd List:" << endl;
    l2.sort();
    disp(l2);

    cout << "\nMerge List 1 & List 2:" << endl;
    l.merge(l2);
    disp(l);

    cout << "Reverse List:" << endl;
    l.reverse();
    disp(l);

    return 0;
}
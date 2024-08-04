#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {20, 10, 40, 30, 60, 50};
    sort(a, a + 4);
    cout << "Sort Till 4th Element:" << endl;
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Sort Till All Element:" << endl;
    sort(a, a + 6);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Sort Till 4th Element in Descending Order:" << endl;
    sort(a, a + 4, greater<int>());
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Sort Till All Element in Descending Order:" << endl;
    sort(a, a + 6, greater<int>());
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 5;
    vector<int> a;
    cout << "Enter 5 elements:" << endl;
    for (int i = 0; i < x; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    map<int, int> m;
    for (auto i : a)
    {
        m[i]++;
    }

    for (const auto &pair : m)
    {
        cout << "Element: " << pair.first << " Count: " << pair.second << endl;
    }

    return 0;
}

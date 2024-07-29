#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    vector<int> v;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < x; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    map<int, int> m;
    for (auto i : v)
    {
        m[i]++;
    }

    v.clear(); // Correctly clear the vector before reusing it

    cout << "Unique Numbers are:" << endl;
    for (const auto &x : m)
    {
        if (x.second == 1)
        {
            v.push_back(x.first);
        }
    }

    for (auto i : v)
    {
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}

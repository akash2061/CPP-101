#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    cout << s.size() << endl;
    s.insert(10);
    s.insert(5);
    s.insert(1);
    s.insert(20);
    s.insert(15);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    bool x = s.find(5) != s.end();
    cout << "Set contains 5? (1 or 0): " << x;
    return 0;
}
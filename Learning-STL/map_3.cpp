#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 20));
    int n;
    cout << "Enter the number of key-value pairs: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int key, value;
        cout << "Enter key and value: ";
        cin >> key >> value;
        m[key] = value; // Insert the key-value pair into the map
    }
    cout << "\nMap contents:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    auto it = m.begin();
    cout << "Default First Value:\n" << it->first << " " << it->second << endl;

    return 0;
}
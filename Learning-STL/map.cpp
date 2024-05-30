#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["three"] = 3;
    m["two"] = 2;
    m["one"] = 1;

    // Accessing elements
    cout << "Value for 'two': " << m["two"] << endl;

    // Iterating over elements
    for (const auto &pair : m)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

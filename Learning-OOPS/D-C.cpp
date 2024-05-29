#include <bits/stdc++.h>
using namespace std;

class wow
{
public:
    int id;
    wow()
    {
        cout << "ID: " << id << endl;
    }
};
int main()
{
    wow w;
    w.id = 10;
    int i = 5;
    while (i > 0)
    {
        wow w1;
        w1.id = i;
        i--;
    }
    return 0;
}
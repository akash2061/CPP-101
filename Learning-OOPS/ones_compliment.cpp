#include <bits/stdc++.h>
using namespace std;
class comp
{
private:
    string s;

public:
    void read()
    {
        cin >> s;
    }
    void compliment()
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0' && s[i] != '1')
            {
                cout << "Invalid Binary input." << endl;
                exit(0);
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
        }
    }
    void two()
    {
        int carry = 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (carry == 0)
            {
                break;
            }
            if (s[i] == '0')
            {
                s[i] = '1';
                carry = 0;
            }
            else
            {
                s[i] = '0';
            }
        }
        if (carry == 1)
        {
            s = '1' + s;
        }
    }

    void print()
    {
        cout << s << endl;
    }
};
int main()
{
    comp c;
    c.read();
    c.compliment();
    c.print();
    c.two();
    c.print();
    return 0;
}
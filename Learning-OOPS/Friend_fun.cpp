#include <iostream>
using namespace std;

class GFG;
// Friend function declaration
void fun(GFG &x);

class GFG
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // Friend function declaration
    friend void fun(GFG &x);
    friend class F;
};

class F
{
public:
    void display(GFG &t)
    {
        cout << "The value of Private Variable = " << t.private_variable << endl;
        cout << "The value of Protected Variable = " << t.protected_variable << endl;
        fun(t); // Call the friend function
    }
};

// Friend function definition
void fun(GFG &x)
{
    cout << "Friend Function." << endl;
    // Private member is inaccessible directly
    cout << "Private: " << x.private_variable << endl;
    cout << "Protected: " << x.protected_variable << endl;
}

// Driver code
int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}

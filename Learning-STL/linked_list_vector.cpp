#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef struct LinkedList
{
    int data;
    LinkedList *next;
} node;

node *temp, *head, *tail;

int Dis()
{
}

int Add()
{
}

int Del()
{
}

int main()
{
    while (true)
    {
        cout << "Enter Choice:" << endl;
        cout << "1. Display Element" << endl;
        cout << "2. Add Element." << endl;
        cout << "3. Delete Element." << endl;
        cout << "0. Exit" << endl;
        int x;
        switch (x)
        {
        case 0:
            exit(0);
            break;
        case 1:
            Dis();
            break;
        case 2:
            Add();
            break;
        case 3:
            Del();
            break;
        default:
            cout << "Enter a valid Choice...!" << endl;
            break;
        }
    }
    return 0;
}
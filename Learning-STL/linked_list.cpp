#include <bits/stdc++.h>
using namespace std;

typedef struct LinkedList
{
    int data;
    LinkedList *next;
} node;

node *head = nullptr, *tail = nullptr;
int c = 0;

void Dis()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    node *temp = new node;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "\t:\t" << &temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void Add()
{
    c++;
    int val;
    cin >> val;
    node *temp = new node;
    temp->data = val;
    temp->next = nullptr;
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void Del()
{
    if (head == nullptr)
    {
        cout << "The list is empty." << endl;
        return;
    }

    int value;
    cout << "Enter value to delete: ";
    cin >> value;

    node *temp = head;
    node *prev = nullptr;

    while (temp != nullptr && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Value not found in the list." << endl;
        return;
    }

    if (temp == head)
    {
        head = head->next;
    }
    else
    {
        prev->next = temp->next;
    }

    if (temp == tail)
    {
        tail = prev;
    }

    delete temp;
    c--;
}

int main()
{
    while (true)
    {
        cout << "\nEnter Choice:" << endl;
        cout << "1. Display Element" << endl;
        cout << "2. Add Element." << endl;
        cout << "3. Delete Element." << endl;
        cout << "0. Exit." << endl;
        cout << endl;
        int x;
        cin >> x;
        cout << endl;
        switch (x)
        {
        case 0:
            delete head;
            delete tail;
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
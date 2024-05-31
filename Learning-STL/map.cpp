#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students;

    // Inserting key-value pairs
    students[1001] = "Alice";
    students[1002] = "Bob";
    students[1003] = "Charlie";

    // Accessing elements
    cout << "Student with roll number 1002: " << students[1002] << endl;

    // Inserting using insert() function
    students.insert({1004, "David"});

    // Accessing elements using iterators
    for (auto it = students.begin(); it != students.end(); ++it)
    {
        cout << "Roll number: " << it->first << ", Name: " << it->second << endl;
    }

    // Erasing elements using iterators
    cout << "\nRemoving 1002:" << endl;
    students.erase(1002);
    auto it = students.find(1003);
    if (it != students.end())
    {
        // students.erase(it);
        auto last = students.rbegin();
        cout << "Last student: Roll number " << last->first << ", Name: " << last->second << endl;
    }

    // Printing remaining elements
    for (const auto &pair : students)
    {
        std::cout << "Roll number: " << pair.first << ", Name: " << pair.second << std::endl;
    }
    return 0;
}

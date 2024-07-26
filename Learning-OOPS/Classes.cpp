#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    int standard;
    string f_name;
    string l_name;

public:
    void set_age(int age)
    {
        this->age = age;
    };
    void set_standard(int standard)
    {
        this->standard = standard;
    };
    void set_first_name(string name)
    {
        f_name = name;
    };
    void set_last_name(string name)
    {
        l_name = name;
    };
    int get_age()
    {
        return age;
    };
    int get_standard()
    {
        return standard;
    };
    string get_first_name()
    {
        return f_name;
    };
    string get_last_name()
    {
        return l_name;
    };

    string to_string()
    {
        string s = std::to_string(age) + "," + f_name + "," + l_name + "," + std::to_string(standard);
        return s;
    };
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cout << "Enter age, first name, last name, and standard: ";
    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
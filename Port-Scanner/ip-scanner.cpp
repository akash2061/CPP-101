#include <iostream>
#include <string>
#include <cstdlib>
#include <regex>
using namespace std;

bool is_ip_connected(const string &ip)
{
    string ping_command = "ping -c 1 " + ip + " > /dev/null";
    int result = system(ping_command.c_str());
    return result == 0;
}

bool is_valid_ip(const string &ip)
{
    regex ip_pattern("^\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}$");
    return regex_match(ip, ip_pattern);
}

int main()
{
    string ip;
    cout << "Enter IP address to check: ";
    cin >> ip;

    if (!is_valid_ip(ip))
    {
        cout << "Invalid IP address." << endl;
        return 1;
    }

    if (is_ip_connected(ip))
    {
        cout << ip << " is connected to the network." << endl;
    }
    else
    {
        cout << ip << " is NOT connected to the network." << endl;
    }

    return 0;
}

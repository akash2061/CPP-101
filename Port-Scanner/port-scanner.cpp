#include <iostream>
#include <vector>
#include <string>
#include <cstring> // for memset
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h> // for close

#define MAX 65535

using namespace std;

bool is_valid_ip(const string &ip)
{
    struct sockaddr_in ipv4;
    int result = inet_pton(AF_INET, ip.c_str(), &(ipv4.sin_addr));
    return result != 0;
}

bool is_port_open(const string &ip, int port)
{
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0)
    {
        cerr << "Socket creation failed" << endl;
        return false;
    }

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(ip.c_str());
    server_addr.sin_port = htons(port);

    int result = connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr));

    close(sock);

    return result == 0;
}

int main()
{
    string ip;
    unsigned int start_port, end_port; // Change the data type to unsigned int

    cout << "Enter IP address to scan: ";
    cin >> ip;
    if (!is_valid_ip(ip))
    {
        cerr << "Invalid IP address." << endl;
        return 1;
    }

    cout << "Enter start port (0-65535): ";
    cin >> start_port;
    if (start_port < 0 || start_port > MAX)
    {
        cerr << "Invalid start port." << endl;
        return 1;
    }

    cout << "Enter end port (0-65535): ";
    cin >> end_port;
    if (end_port < 0 || end_port > MAX || end_port < start_port)
    {
        cerr << "Invalid end port." << endl;
        return 1;
    }

    cout << endl;

    int open_count = 0, closed_count = 0;
    vector<int> open_ports;
    for (unsigned int port = start_port; port <= end_port; ++port)
    {
        if (is_port_open(ip, port))
        {
            open_count++;
            open_ports.push_back(port);
            cout << "Port " << port << " is open." << endl;
        }
        else
        {
            closed_count++;
            cout << "Port " << port << " is closed." << endl;
        }
    }
    cout << endl;
    cout << "Open Ports: " << open_count << " :  [ ";
    for (auto port : open_ports)
    {
        cout << port << " ";
    }
    cout << "]" << endl;
    cout << "Closed Ports: " << closed_count << endl;

    return 0;
}

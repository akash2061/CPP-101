#include <iostream>
#include <vector>
#include <string>
#include <cstring> // for memset
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h> // for close
using namespace std;

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
    int start_port, end_port;

    cout << "Enter IP address to scan: ";
    cin >> ip;
    cout << "Enter start port: ";
    cin >> start_port;
    cout << "Enter end port: ";
    cin >> end_port;
    cout << endl;

    int o = 0, c = 0;
    vector<int> open;
    vector<int> close;
    for (int port = start_port; port <= end_port; ++port)
    {
        if (is_port_open(ip, port))
        {
            o++;
            open.push_back(port);
            cout << "Port " << port << " is open." << endl;
        }
        else
        {
            c++;
            close.push_back(port);
            cout << "Port " << port << " is closed." << endl;
        }
    }
    cout << endl;
    cout << "Open Ports: " << o << " :  [ ";
    for (auto i : open)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << "Close Ports: " << c << endl;

    return 0;
}

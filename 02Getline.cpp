#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_name;
    cout << "Ente your name" << endl;
    getline(cin, my_name);
    cout << "Hello, " << my_name << endl;

    return 0;
}
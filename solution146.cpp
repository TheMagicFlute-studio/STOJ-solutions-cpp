#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string str;

    getline(cin, str);

    char a = str[str.find("a") + 2];

    char b = str[str.find("b") + 2];

    str[str.find("a") + 2] = b;

    str[str.find("b") + 2] = a;
    
    cout << str << endl;
    
    return 0;
}
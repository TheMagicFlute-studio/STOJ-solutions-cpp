#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    int i = 0, res = 0, res1 = 0;

    getline(cin, s);

    while(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
    {
        res = res * 10 + (int)(s[i] - '0');
        i++;
    }
    char fn = s[i];
    i++;

    while(i < s.length())
    {
        res1 = res1 * 10 + (int)(s[i] - '0');
        i++;
    }

    if (fn == '+')
    {
        cout << res + res1 << endl;
    }
    else if (fn == '-')
    {
        cout << res - res1 << endl;
    }
    else if (fn == '*')
    {
        cout << res * res1 << endl;
    }
    else if (fn == '/')
    {
        cout << res / res1 << endl;
    }
    
    return 0;
}
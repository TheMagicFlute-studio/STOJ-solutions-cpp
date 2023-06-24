#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char str[1000];

    cin >> str;

    int n = strlen(str) - 1;

    bool ans;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[n - i])
        {
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
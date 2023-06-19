#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;
    
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not equal";
    }
    cout << endl;
    
    return 0;
}
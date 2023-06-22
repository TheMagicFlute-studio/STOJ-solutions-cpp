#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m, n, cnt = 0;

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        int money;

        cin >> money;

        cnt += money;
    }
    
    if (cnt >= m)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, arr[10001], a = 0, b = 0, c = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a++;
        }
        else if (arr[i] < 0)
        {
            b++;
        }
        else if (arr[i] == 0)
        {
            c++;
        }
    }
    cout << a << endl << b << endl << c << endl;
    
    return 0;
}
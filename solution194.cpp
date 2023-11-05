#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int a, arr[100000], n, cnt = 0;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);

    n = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == n)
        {
            cnt++;
        }
        else
        {
            cout << n << " " << cnt << endl;
            n = arr[i];
            cnt = 1;
        }
    }
    cout << n << " " << cnt << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, max = -1, maxIndex, max2 = -1;
    cin >> a;

    int arr[1001];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; maxIndex = i;
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == max && i != maxIndex)
        {
            cout << max << endl;
            return 0;
        }
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }
    cout << max2 << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

bool bucket[10010];

int main(int argc, char *argv[])
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bucket[x] = 1;
    }
    for (int i = 0; i < 10010; i++)
    {
        if (bucket[i])
        {
            k--;
        }
        if (k == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "NO RESULT" << endl;
    
    return 0;
}
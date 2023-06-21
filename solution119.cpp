#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt = 0;

    cin >> n;

    int ai[n], bi[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ai[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (ai[i] > ai[j])
            {
                cnt++;
            }
        }
        bi[i] = cnt;

        cnt = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << bi[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int a[100010];

int main(int argc, char *argv[])
{
    int n, tmp, maxn = 0, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 0; i < 100010; i++)
    {
        if(a[i] > maxn)
        {
            maxn = a[i];
            ans = i;
        }
    }
    cout << ans << endl;
    
    return 0;
}
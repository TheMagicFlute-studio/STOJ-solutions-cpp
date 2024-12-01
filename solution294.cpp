#include <iostream>
#include <algorithm>

using namespace std;

int odd[100010], even[100010];

int main(int argc, char *argv[])
{
    int n, tmp, oddidx = 0, evenidx = 0;
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        if(tmp % 2 == 0)
        {
            even[evenidx++] = tmp;
        }
        else
        {
            odd[oddidx++] = tmp;
        }
    }
    sort(odd, odd + oddidx, greater<int>());
    sort(even, even + evenidx, less<int>());

    for(int i = 0; i < oddidx; i++)
    {
        cout << odd[i] << " ";
    }
    for(int i = 0; i < evenidx; i++)
    {
        cout << even[i] << " ";
    }
    
    return 0;
}
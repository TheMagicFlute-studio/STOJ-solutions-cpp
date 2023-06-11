#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    // int count = unique(x, x + n) - x;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    
    return 0;
}

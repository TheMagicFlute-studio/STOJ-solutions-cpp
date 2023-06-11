#include <iostream>
#include <algorithm>

int main(int argc, char **argv)
{
    using namespace std;
    
    int n;

    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % m) cout << i << endl;
    }
    
    return 0;
}

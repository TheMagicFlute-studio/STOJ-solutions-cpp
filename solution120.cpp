#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n[100], i = 0;

    while (cin >> n[i])
    {
        i++;
    }
    for (i - 1; i > 0; i--)
    {
        cout << n[i - 1] << " ";
    }
    cout << endl;
    
    return 0;
}
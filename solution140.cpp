#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, len;

    char a[101];

    cin >> a;

    len = strlen(a);

    for(int i = len - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    
    cout << endl;
    
    return 0;
}
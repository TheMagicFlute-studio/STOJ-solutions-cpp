#include <iostream>

using namespace std;

int max(int n1, int n2, int n3)
{
    if (n1 >= n2 && n1 >= n3)
    {
        return n1;
    }
    if (n2 >= n1 && n2 >= n3)
    {
        return n2;
    }
    if (n3 >= n1 && n3 >= n2)
    {
        return n3;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n2 == n3 && n3 == n1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << max(n1, n2, n3) << endl;
    }

    return 0;
}
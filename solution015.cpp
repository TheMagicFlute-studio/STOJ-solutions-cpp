#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    char a;

    cin >> a;

    a = (int)(a);

    if (a >= 65 && a <= 90)
    {
        cout << "upper" << endl;
    }
    if (a >= 97 && a <= 122)
    {
        cout << "lower" << endl;
    }

    return 0;
}

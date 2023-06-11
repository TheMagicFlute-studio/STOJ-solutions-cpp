#include <iostream>

int main(int argc, char *argv[])
{
    using namespace std;

    int n;

    cin >> n;

    switch (n/10)
    {
        case 10:
        case 9:
            cout << "A";
            break;
        case 8:
            cout << "B";
            break;
        case 7:
            cout << "C";
            break;
        case 6:
            cout << "D";
            break;
        default:
            cout << "F";
            break;
    }
    cout << endl;

    return 0;
}
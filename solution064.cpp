#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    string season;

    cin >> n;

    switch (n)
    {
    case 3:
    case 4:
    case 5:
        season = "spring";
        break;

    case 6:
    case 7:
    case 8:
        season = "summer";
        break;

    case 9:
    case 10:
    case 11:
        season = "autumn";
        break;

    case 12:
    case 1:
    case 2:
        season = "winter";
        break;

    default:
        break;
    }
    cout << season << endl;

    return 0;
}
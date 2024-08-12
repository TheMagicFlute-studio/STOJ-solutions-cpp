#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double r, d, c, s, pi = 3.14159265358979323846;

    cin >> r;

    d = 2 * r;
    c = 2 * pi * r;
    s = pi * r * r;

    cout << fixed << setprecision(4) << d << ' ' << c << ' ' << s << endl;

    return 0;
}
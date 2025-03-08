#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14;

int main(int argc, char *argv[])
{
    double r;
    cin >> r;

    double v = 4.0 / 3.0 * PI * r * r * r;

    cout << fixed << setprecision(2) << v << endl;

    return 0;
}
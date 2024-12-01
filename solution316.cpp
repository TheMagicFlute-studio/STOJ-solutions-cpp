#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double x, y;
    cin >> x >> y;

    cout << fixed << setprecision(4) << (x * 87.0 + y * 85.0) / (x + y) << endl;

    return 0;
}
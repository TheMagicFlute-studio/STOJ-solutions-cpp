#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
    using namespace std;

    int a;

    float b;

    cin >> a >> b;

    b *= 1000;

    cout << a * 2 << endl;

    cout << fixed << setprecision(3) << (b / a) << endl;

    return 0;
}
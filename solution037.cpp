#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
    using namespace std;

    double c, f;

	cin >> f;

    c = (f - 32) * 5 / 9;

    cout << fixed << setprecision(5) << c << endl;

	return 0;
}
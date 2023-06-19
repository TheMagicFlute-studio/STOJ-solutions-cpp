#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;

	cin >> a >> b >> c;

    cout << fixed << setprecision(4) << c / a << " " << c / b << endl;
    
    return 0;
}
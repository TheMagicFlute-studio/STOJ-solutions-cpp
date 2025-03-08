#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double k, f, c;
    cin >> k;
    c = k - 273.15;
    f = c * 1.8 + 32;

    if (f > 212.0)
    {
        cout << "Temperature is too high!" << endl;
        return 0;
    }
    cout << fixed << setprecision(2) << c << " " << f << endl;
    
    return 0;
}
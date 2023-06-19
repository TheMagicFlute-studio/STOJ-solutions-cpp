#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double h;

	cin >> h;

    cout << fixed << setprecision(1) << (h - 100) * 0.9 << endl;
    
    return 0;
}
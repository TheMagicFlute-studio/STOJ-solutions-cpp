#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int a;

    double b;

    cin >> a >> b;

    cout << a * 2 << endl << fixed << setprecision(3) << (b * 1000 / a) << endl;
    
    return 0;
}
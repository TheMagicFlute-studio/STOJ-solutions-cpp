#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double n = 0, tmp;
    int cnt = 0;

    while (cin >> tmp)
    {
        n += tmp;
        cnt ++;
    }
    cout << fixed << setprecision(1) << n / cnt << endl;
    
    return 0;
}
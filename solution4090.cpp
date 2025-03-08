#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int h, m, s, t;
    cin >> h >> m >> s >> t;

    s += t;
    m += s / 60;
    s %= 60;

    h += m / 60;
    m %= 60;
    
    cout << h << " " << m << " " << s << endl;

    return 0;
}

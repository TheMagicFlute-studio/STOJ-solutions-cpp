#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int h, m, s;
    char c;
    cin >> h >> m >> s >> c;
    h += (c == 'P' ? 12 : 0);
    cout << h * 3600 + m * 60 + s << endl;

    return 0;
}

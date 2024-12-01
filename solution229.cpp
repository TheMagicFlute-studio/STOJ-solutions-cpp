#include <iostream>

using namespace std;

struct game
{
    int win = 0;
    int lose = 0;
} a[10010], b[10010];

int main(int argc, char *argv[])
{
    char g;
    int acnt = 0, bcnt = 0;
    while (cin >> g && g != 'E')
    {
        if (g == 'W')
        {
            a[acnt].win++;
            b[bcnt].win++;
        }
        else if (g == 'L')
        {
            a[acnt].lose++;
            b[bcnt].lose++;
        }
        if ((a[acnt].win >= 11 || a[acnt].lose >= 11) && abs(a[acnt].win - a[acnt].lose) >= 2)
            acnt++;
        if ((b[bcnt].win >= 21 || b[bcnt].lose >= 21) && abs(b[bcnt].win - b[bcnt].lose) >= 2)
            bcnt++;
    }

    for (int i = 0; i <= acnt; i++)
    {
        cout << a[i].win << ':' << a[i].lose << endl;
    }
    cout << endl;
    for (int i = 0; i <= bcnt; i++)
    {
        cout << b[i].win << ':' << b[i].lose << endl;
    }

    return 0;
}
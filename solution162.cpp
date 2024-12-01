#include <iostream>

using namespace std;

struct __num
{
    int num;
    int x, y;
    __num(int _num, int _x = -1, int _y = -1)
    {
        num = _num;
        x = _x;
        y = _y;
    }
    __num() {}
};

int world[10][10];
__num mins[10], maxs[10];

int main(int argc, char *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        mins[i] = __num(0x3fffffff);
        maxs[i] = __num(-0x3fffffff);
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> world[i][j];
            if (world[i][j] > maxs[i].num)
                maxs[i] = __num(world[i][j], i, j);
            if (world[i][j] < mins[j].num)
                mins[j] = __num(world[i][j], i, j);
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (maxs[i].x == mins[j].x && maxs[i].y == mins[j].y && maxs[i].num == mins[j].num)
            {
                cout << i << " " << j << " " << world[i][j] << endl;
                return 0;
            }
        }
    }
    cout << "not found";

    return 0;
}
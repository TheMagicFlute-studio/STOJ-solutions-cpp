#include <iostream>
using namespace std;

int main()
{
    for (double x = 0; x < 20; x++)
    { // 公鸡数量不超过20只
        for (double y = 0; y < 33; y++)
        {                           // 母鸡数量不超过33只
            double z = 100 - x - y; // 计算雏鸡数量
            if (5 * x + 3 * y + z / 3 == 100 && x + y + z == 100)
            {                                              // 判断是否满足方程组
                cout << x << " " << y << " " << z << endl; // 输出解
            }
        }
    }
    // cout << 0 << " " << 25 << " " << 75 << endl;
    // cout << 4 << " " << 18 << " " << 78 << endl;
    // cout << 8 << " " << 11 << " " << 81 << endl;
    // cout << 12 << " " << 4 << " " << 84 << endl;

    return 0;
}

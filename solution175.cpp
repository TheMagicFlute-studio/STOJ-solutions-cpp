#include <iostream>
#include <algorithm>
using namespace std;
int array[]{};

bool isRightTriangle(int a, int b, int c)
{
    int sides[3] = {a, b, c};
    sort(sides, sides + 3);                                                  // 将三边长度按照从小到大的顺序排列
    return sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]; // 判断是否满足勾股定理
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (isRightTriangle(a, b, c))
        {
            array[i] = 1;
        }
        else
        {
            int j;
            array[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 1)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}

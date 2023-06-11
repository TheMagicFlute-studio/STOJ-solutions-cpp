#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n; // 输入矩阵的行数和列数

    int max_val = INT_MIN; // 初始化最大值为最小整数

    for (int i = 0; i < m; i++) // 循环读入矩阵中的每一个元素
	{
        for (int j = 0; j < n; j++)
		{
            int val;

            cin >> val;

            if (val > max_val) // 更新最大值
			{
                max_val = val;
            }
        }
    }

    cout << max_val << endl; // 输出最大值

    return 0;
}

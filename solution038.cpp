# include <bits/stdc++.h>

int main()
{
    using namespace std;

    const int SIZE = 4;
    int nums[SIZE] = {3, 1, 9, 5};

    // 计算平均值
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += nums[i];
    }
    double mean = sum / SIZE;

    // 计算中位数
    sort(nums, nums + SIZE);
    double median;
    if (SIZE % 2 == 0)
    {
        median = (nums[SIZE / 2 - 1] + nums[SIZE / 2]) / 2.0;
    }
    else
    {
        median = nums[SIZE / 2];
    }

    // 输出结果
    cout << fixed << setprecision(3) << mean << ' ' << median << endl;

    return 0;
}

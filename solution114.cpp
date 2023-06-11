#include <iostream>

int main()
{
    using namespace std;
    int days;
    cin >> days;         // 输入天数
    int coins = 0;       // 初始金币数为0
    int n = 1;           // 初始N为1
    int count = 0;       // 记录已发放天数
    while (count < days) // 循环发放金币
    {
        for (int i = 0; i < n && count < days; i++) // 发放N天的金币
        {
            coins += n;
            count++;
        }
        n++;
    }
    cout << coins << endl;
    return 0;
}

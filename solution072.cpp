# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int sum = 0;//定义累加和

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;//如果为偶数，则执行累加
        }
        else 
        {
            continue;//如果为奇数，跳出本次循环，进行下一次循环
        }
    }
    
    cout << sum << endl;

	return 0;
}
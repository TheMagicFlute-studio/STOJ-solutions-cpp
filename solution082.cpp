# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int m, n, sum = 0;//定义累加和

    cin >> m >> n;

    for (m; m <= n; m++)
    {
        if (!(m % 2 == 0))
        {
            sum += m;//如果为奇数，则执行累加
        }
        else 
        {
            continue;//如果为偶数，跳出本次循环，进行下一次循环
        }
    }
    
    cout << sum << endl;

	return 0;
}
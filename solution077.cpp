#include<iostream>

using namespace std;

int main()
{
	int n, m, times = 0;

	cin >> n >> m;  //输入两个数

	int x = n < m ? n : m;  //m,n的最大的公约数永远不可能是较大的那个数，只可能是较小的数

	for(x; x >= 1; x--)
	{
		times++;

		if(n % x == 0 && m % x == 0)   //x正好被n,m整除，则找到了x
        {
			break;
        }
	}
	//cout<<"循环次数为："<<times<<endl;

	cout << x << endl; //最大公约数

	return 0;
}
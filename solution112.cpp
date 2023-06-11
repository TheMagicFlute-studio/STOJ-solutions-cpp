#include <iostream>

bool isPrime(int n)
{ // 判断质数
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	using namespace std;
	int n;
	cin >> n;
	for (int i = n - 1; i >= 2; i--) // 从 n-1 开始往下找
	{
		if (n % i == 0 && isPrime(i)) // 找到一个因子 i，判断是否为质数
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}

# include <bits/stdc++.h>

using namespace std;

int print_prime_factor(int num)
{

    for (int i = 2; i <= num; i++)  //循环查找判断质因数
    {
        while (num % i == 0)    //若i为num的质因数，则输出i
        {
            cout <<  i;

            num /= i;    //对num除以i后的数求取质因数

            if (num != 1)//判断num是否除尽 
            {
                cout << " ";
            }
        }
    }
    cout << endl;
    
    return 0;
}
int main(int argc, char** argv)
{
    int a;

    cin >> a;

    print_prime_factor(a);
    
	return 0;
}
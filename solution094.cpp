#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	double i;

	double sum = 0.0;

	for(i = 1; i <= 100; i++) 
	{
		  sum = sum + 1/(double)(i); // 更简单的写法：sum = sum + 1.0/i; 推荐           
	}

    cout << sum << endl;
	
	return 0;
}
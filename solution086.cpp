#include <iostream>
#include <cmath>

using namespace std;

bool is_Narcissistic_number(int num)
{
    int a, b, c;

    a = num / 100;			    //百位
    
	b = num % 100 / 10;			//十位

	c = num % 100 % 10;			//个位

	if(num == pow(a, 3) + pow(b, 3) + pow(c, 3))
    {
        return true;
    }

    return false;
}

int main(int argc, char *argv[])
{
    for (int i = 100; i < 1000; i++)
    {
        if (is_Narcissistic_number(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
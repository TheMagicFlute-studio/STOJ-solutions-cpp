# include <bits/stdc++.h>

using namespace std;

bool check_Narcissistic_number(int num)
{
    int a, b, c;

    a = num / 100;			    //百位
    
	b = num % 100 / 10;			//十位

	c = num % 100 % 10;			//个位

	if(num == pow(a, 3) + pow(b, 3) + pow(c, 3))
    {
        return true;
    }
	else
    {
	    return false;
    }
}

int main(int argc, char** argv)
{
    for (int i = 100; i < 1000; i++)
    {
        if (check_Narcissistic_number(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

	return 0;
}
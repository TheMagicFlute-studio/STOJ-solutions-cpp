# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int a ,b;

    cin >> a >> b;

	a = a ^ b;

    b = a ^ b; //此时b=(a^b)^b=a

    a = a ^ b; //此时a=(a^b)^a=b

    cout << a << " " << b << endl;

	return 0;
}
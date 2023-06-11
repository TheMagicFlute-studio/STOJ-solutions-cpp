# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char a, b;

	cin >> a;

    if (a >= 65 && a <= 90)
    {
        b = (char)(a + 32);
    }
    else if (a >= 97 && a <= 122)
    {
        b = (char)(a - 32);
    }
    cout << b << endl;

	return 0;
}
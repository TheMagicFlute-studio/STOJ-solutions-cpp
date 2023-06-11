# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n, a, b = 0;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> n;

        if ((n % 10) - (n / 1000) - (n / 100 % 10) - (n / 10 % 10) > 0)
        {
            b++;
        }
    }
    cout << b << endl;

	return 0;
}
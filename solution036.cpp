# include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int a, tmp1, tmp2;

	cin >> a;

    tmp1 = a % 10;

    tmp2 = a / 10;

    cout << tmp1 << tmp2 << endl;

	return 0;
}
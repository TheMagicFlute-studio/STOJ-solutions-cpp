# include <iostream>

int main(int argc, char** argv)
{
	using namespace std;

    double a, b, tmp;

	cin >> a >> b;

	tmp = a;

	a = b;

	b = tmp;

	cout << a << " " << b << endl;

	return 0;
}
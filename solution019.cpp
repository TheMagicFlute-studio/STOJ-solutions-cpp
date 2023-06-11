# include <iostream>

int main(int argc, char** argv)
{
    using namespace std;

    int a, b, c, d;

	cin >> a >> b >> c;

	if(a > b)
    {
        d = a;
        a = b;
        b = d;
    }
	if(a > c)
    {
        d = a;
        a = c;
        c = d;
    }
	if(b > c)
    { 
        d = b;
        b = c;
        c = d;
    }

	cout << a << " " << b << " " << c << endl;

	return 0;
	
}

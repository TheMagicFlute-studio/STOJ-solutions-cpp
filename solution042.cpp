# include <iostream>

int main(int argc, char** argv)
{
    using namespace std;

    float a;
    
    int b = 2, c, d;

	cin >> a;

    c = (int)(a * b);

    d = (int)(a) * b;

    cout << c << " " << d << endl;

	return 0;
}
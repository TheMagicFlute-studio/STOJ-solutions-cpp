#include <iostream>

int main(int argc, char** argv)
{
	using namespace std;

    int a[100000], n, i, max, min;

    max = 0;

	min = 0;

	cin >> n;

	for(i = 0 ; i < n ; i++)
    {
		cin >> a[i];
	}
	
	for(i = 1 ; i < n ; i++)
    {
		if(a[i] > a[max])
        {
			max = i;
		}
		
		if(a[i] < a[min])
        {
			min = i;
		}
	}
	
	cout << a[max] << endl;

    cout << a[min] << endl;

	return 0;
}
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%u", &n);
	while (n > 0)
	{
		int i = n % 10;
		printf("%u", i);
		printf(" ");

		n /= 10;
	}
	return 0;
}

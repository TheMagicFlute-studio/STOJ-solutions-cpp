#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
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
	printf("\n");
	
	return 0;
}
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
    double n;
    scanf("%lf", &n);

    printf("%f\n", n);
    printf("%.5f\n", n);
    printf("%e\n", n);
    printf("%g\n", n);

    return 0;
}
#include <cstdio>
#include <algorithm>
int a[1000000];

int main(int argc, char *argv[])
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    std::sort(a, a+n);

    for (int i = n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
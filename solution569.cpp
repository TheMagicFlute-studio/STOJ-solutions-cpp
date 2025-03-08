#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    double maxn = -1;
    double minn = 101;
    double sum = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double tmp;
        scanf("%lf", &tmp);
        sum += tmp;
        maxn = max(maxn, tmp);
        minn = min(minn, tmp);
        if (i >= 3)
        {
            printf("%.2f\n", (sum - maxn - minn) / (i - 2));
        }
    }
    
    return 0;
}
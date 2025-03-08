#include <iostream>

using namespace std;

long long lowbit(long long p);
void update(long long p, long long x);
long long sum(long long p);

long long tree[1000010];
long long n, m;

int main()
{
    cin >> n >> m;

    long long tmp, a, b;
    for(long long i = 0; i < 1000010; i++)
    {
        tree[i] = 0;
    }

    for (long long i = 1; i <= n; i++)
    {
        cin >> tmp;
        update(i, tmp);
    }

    for (long long i = 0; i < m; i++)
    {
        cin >> tmp >> a >> b;
        if (tmp == 1)
        {
            update(a, b);
        }
        else if (tmp == 2)
        {
            cout << sum(b) - sum(a - 1) << endl;
        }
    }

    return 0;
}

long long lowbit(long long p)
{
    return p & (-p);
}

void update(long long p, long long x)
{
    while (p <= n)
    {
        
        tree[p] += x;
        p += lowbit(p);
        // cout << "upd" << ' ' << p << endl;
    }
    // for(long long i = 1; i <= n; i++)
    // {
    //     cout << tree[i] << ' ';
    // }
    // cout << endl;
    return;
}

long long sum(long long p)
{
    long long rat = 0;
    while (p)
    {
        // cout << "sum" << ' ' << p << endl;
        rat += tree[p];
        p -= lowbit(p);
    }
    return rat;
}
#include <iostream>
#include <algorithm>
using namespace std;

struct niyoubin
{
    int s;
    int e;
} a[1145141];

bool cmp(niyoubin x, niyoubin y)
{
    return x.e < y.e;
}

int main(int argc, char *argv[])
{
    int suka, cnt = 1;
    cin >> suka;

    for (int i = 0; i < suka; i++)
    {
        cin >> a[i].s >> a[i].e;
    }

    sort(a, a + suka, cmp);

    int u = a[0].e;
    for (int i = 1; i < suka; i++)
    {
        if (a[i].s >= u)
        {
            cnt++;
            u = a[i].e;
        }
    }

    cout << cnt << '\n';

    return 0;
}
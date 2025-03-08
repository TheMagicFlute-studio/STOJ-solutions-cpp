#include <iostream>

using namespace std;

int father[150010];

int n, k, cnt = 0;

void init()
{
    for (int i = 0; i < 150010; i++)
    {
        father[i] = i;
    }
}

int find(int n)
{
    if (n == father[n])
        return n;
    int fa = find(father[n]);
    father[n] = fa;
    return father[n];
}

void merge(int a, int b)
{
    int aa = find(a);
    int bb = find(b);

    father[aa] = bb;
}

int main(int argc, char *argv[])
{
    init();

    cin >> n >> k;

    int c, a, b;

    for (int i = 0; i < k; i++)
    {
        cin >> c >> a >> b;
        if (a > n || b > n)
        {
            cnt++;
        }
        else if (a == b && c == 2)
        {
            cnt++;
        }
        else
        {
            if (c == 1)
            {
                if (find(a) == find(b + n) || find(b) == find(a + n))
                {
                    cnt++;
                }
                else
                {
                    for (int i = 0; i < 3; i++)
                    {
                        merge(a + i * n, b + i * n);
                    }
                }
            }
            else if (c == 2)
            {
                if (find(a) == find(b) || find(b) == find(a + n))
                {
                    cnt++;
                }
                else
                {
                    for (int i = 0; i < 3; i++)
                    {
                        merge(a + i * n, b + ((i + 1) % 3) * n);
                    }
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
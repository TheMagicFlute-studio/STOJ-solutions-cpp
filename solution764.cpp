#include <iostream>
#include <cmath>

using namespace std;

int father[30010];
int level[30010];
int length[30010];

int n;


void init()
{
    for (int i = 0; i < 30010; i++)
    {
        father[i] = i;
        level[i] = 0;
        length[i] = 1;
    }
}

int find(int n)
{
    if (n == father[n])
        return n;
    int fa = find(father[n]);
    level[n] += level[father[n]];
    father[n] = fa;
    return father[n];
}

void merge(int a, int b)
{
    int aa = find(a);
    int bb = find(b);

    level[aa] += length[bb];
    length[bb] += length[aa];
    length[aa] = 0;

    father[aa] = bb;
}

int main(int argc, char *argv[])
{
    init();

    cin >> n;

    char c;
    int a, b;

    for(int i = 0; i < n; i++)
    {
        cin >> c >> a >> b;
        if(c == 'M')
        {
            merge(a, b);
        }
        if(c == 'C')
        {
            if(find(a) != find(b))
            {
                cout<<-1<<endl;
            }
            else
            {
                cout << abs(level[b] - level[a]) - 1 << endl;
            }
        }
    }

    return 0;
}
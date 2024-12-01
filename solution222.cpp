#include <iostream>
#include <algorithm>

using namespace std;

struct __num
{
    int n, rank;
    __num(int _n, int _rank)
    {
        n = _n;
        rank = _rank;
    }
    __num() {}
} nums[10010];

bool cmp(__num a, __num b)
{
    return a.n < b.n;
}

int main(int argc, char *argv[])
{
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        nums[i] = __num(tmp, i + 1);
    }
    sort(nums, nums + n, cmp);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(nums[j].rank == i + 1)
            {
                cout << j + 1 << " ";
            }
        }
    }

    return 0;
}
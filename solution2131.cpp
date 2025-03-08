#include <iostream>
#include <vector>

using namespace std;

vector<int> woods;
long long n, k, cnt = 0;

// int max_in_arr(vector<int> arr)
// {
//     int max = arr[0];
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }

bool check(int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += woods[i] / mid;
    }
    return sum >= k;
}

int main(int argc, char *argv[])
{

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        woods.push_back(tmp);
        cnt += tmp;
    }
    if (cnt < k)
    {
        cout << 0 << endl;
        return 0;
    }
    // sort(woods.begin(), woods.end());

    long long l = 1, r = 1e8;

    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << endl;

    return 0;
}
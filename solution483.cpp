#include <iostream>
#include <algorithm>

using namespace std;

struct __score
{
    long long score, id;
    __score() {}
    __score(long long _score, int _id)
    {
        score = _score;
        id = _id;
    }
} peoples[200010];

bool cmp(__score a, __score b)
{
    if (a.score == b.score)
    {
        return a.id < b.id;
    }
    return a.score > b.score;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long score;
        cin >> score;
        peoples[i] = __score(score, i);
    }
    sort(peoples, peoples + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << peoples[i].id + 1 << endl;
    }

    return 0;
}
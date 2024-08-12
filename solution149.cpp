#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int n, q;

struct __book
{
    int id;
    int length;
    __book() {};
    __book(int idd, int l)
    {
        id = idd;
        length = l;
    }
} books[1010];

bool cmp(__book a, __book b)
{
    return a.id < b.id;
}

int my_find(int length, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (books[i].length < length)
            continue;
        int tmp = books[i].id % (int)pow(10, length);

        if (tmp == find)
            return books[i].id;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int length, find;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int tmplen, tmpid;

        cin >> tmpid;
        tmplen = to_string(tmpid).length();

        books[i] = __book(tmpid, tmplen);
    }
    sort(books, books + n, cmp);

    for (int i = 0; i < q; i++)
    {
        cin >> length >> find;
        cout << my_find(length, find) << endl;
    }

    return 0;
}
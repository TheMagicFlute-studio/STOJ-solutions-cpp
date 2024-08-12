#include <iostream>
#include <cmath>

using namespace std;

int cnt[26];

int main(int argc, char *argv[])
{
    for (int i = 0; i < 26; i++)
        cnt[i] = 0;
    string s;
    int maxn = -1;
    int minn = 101; // 单词最长100个字母
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > maxn)
            maxn = cnt[i];
        if (cnt[i] < minn && cnt[i] != 0)
            minn = cnt[i];
    }
    int tmp = maxn - minn;
    for (int i = 2; i <= sqrt(tmp); i++)
    {
        if (tmp % i == 0)
        {
            cout << "No Answer" << endl
                 << 0 << endl;
            return 0;
        }
    }
    if (tmp == 0 || tmp == 1)
    {
        cout << "No Answer" << endl
             << 0 << endl;
        return 0;
    }
    cout << "Lucky Word" << endl
         << tmp << endl;

    return 0;
}
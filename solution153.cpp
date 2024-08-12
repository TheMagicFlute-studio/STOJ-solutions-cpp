#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string target, word;
    bool flag = false;
    int idx = 0, cnt = 0, first;
    cin >> target;
    transform(target.begin(), target.end(), target.begin(), ::tolower);

    while (cin >> word)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (flag && word == target)
        {
            cnt++;
            continue;
        }
        if (word == target)
        {
            cnt++;
            flag = true;
            first = idx;
        }
        idx += word.length() + 1;
    }
    if (flag)
    {
        cout << cnt << " " << first << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
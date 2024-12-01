#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(int argc, char *argv[])
{
    string s, tmp;
    vector<string> nums;
    cin >> s;
    int idx = 0;
    bool zeroFlag = false;
    while (s[idx++] == '0')
        zeroFlag = true;
    if (zeroFlag)
        cout << "0 ";
    idx--;
    while (idx < s.size())
    {
        if (s[idx] == '5')
        {
            if (tmp != "")
                nums.push_back(tmp);
            tmp = "";
            while (s[++idx] == '0')
                ;
            continue;
        }
        tmp += s[idx];
        idx++;
    }
    sort(nums.begin(), nums.end(), cmp);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }

    return 0;
}
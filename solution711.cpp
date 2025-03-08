#include <iostream>
#include <cmath>

using namespace std;

string convert(string num, int origin_base, int target_base)
{
    string target_num;
    long long tmp, n = 0;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (isdigit(num[i])) n += (num[i] - '0') * pow(origin_base, num.size() - 1 - i);
        else n += (num[i] - 'A' + 10) * pow(origin_base, num.size() - 1 - i);
    }

    while (n)
    {
        tmp = n % target_base;
        if (tmp < 10) target_num = char(tmp + '0') + target_num;
        else target_num = char(tmp - 10 + 'A') + target_num;
        n /= target_base;
    }
    return target_num;
}

int main(int argc, char *argv[])
{
    int origin_base, target_base;
    string origin_num;
    cin >> origin_base >> origin_num >> target_base;

    cout << convert(origin_num, origin_base, target_base) << endl;
    
    return 0;
}
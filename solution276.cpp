#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string hi_pricision_sub(string a, string b, int base = 10)
{
    string result;
    int i = a.length() - 1;
    int j = b.length() - 1;
    bool flag = 0; // 0: the situation of b < a;
    if (i < j || (i == j && a < b))
    {
        swap(a, b);
        swap(i, j);
        flag = 1;
    }
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = carry;
        if (a[i] >= '0' && a[i] <= '9')
        {
            sum += a[i] - '0';
            sum -= b[j] - '0';
            if (sum < 0)
            {
                sum += base;
                carry = -1;
            }
            else
                carry = 0;
        }
        else
        {
            sum += a[i] - 'A' + 10;
            sum -= b[j] - 'A' + 10;
            if (sum < 0)
            {
                sum += base;
                carry = -1;
            }
            else
                carry = 0;
        }
        i--;
        j--;
        result += to_string(sum);
    }
    while (carry != 0)
    {
        int sum = carry;
        if (a[i] >= '0' && a[i] <= '9')
        {
            sum += a[i] - '0';
            if (sum < 0)
            {
                sum += base;
                carry = -1;
            }
            else
                carry = 0;
        }
        else
        {
            sum += a[i] - 'A' + 10;
            if (sum < 0)
            {
                sum += base;
                carry = -1;
            }
            else
            carry = 0;
        }
        i--;
        result += to_string(sum);
    }
    while (i >= 0)
    {
        result += a[i--];
    }
    while (result.back() == '0' && result.length() > 1)
        result.pop_back();
    if (flag)
        result += '-';
    reverse(result.begin(), result.end());

    return result;
}

int main(int argc, char *argv[])
{
    string a, b;
    cin >> a >> b;
    cout << hi_pricision_sub(a, b) << endl;

    return 0;
}
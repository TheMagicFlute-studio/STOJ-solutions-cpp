#include <iostream>

using namespace std;

string s1, s2;
int lenc, a[505], b[505], c[505], carry;

void strToarr(string s, int a[])
{
    a[0] = s.length();
    for (int i = 1; i <= a[0]; i++)
        a[i] = s[a[0] - i] - '0';
}
string add(string s1, string s2)
{
    strToarr(s1, a);
    strToarr(s2, b);
    lenc = max(a[0], b[0]);
    for (int i = 1; i <= lenc; i++)
    {
        c[i] = a[i] + b[i] + carry;
        carry = c[i] / 10;
        c[i] %= 10;
    }
    if (carry)
        c[++lenc] = carry;
    string ans = "";
    for (int i = lenc; i >= 1; i--)
        ans += c[i] + '0';
    return ans;
}

int main(int argc, char *argv[])
{
    cin >> s1 >> s2;
    cout << add(s1, s2) << endl;
    
    return 0;
}
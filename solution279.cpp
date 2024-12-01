#include <iostream>

using namespace std;

string hi_mul_low(string a, int b)
{
    int carry = 0, sum;
    string result;
    for(int i = a.size() - 1; i >= 0; i--)
    {
        sum = carry;
        sum += (a[i] - '0') * b;
        carry = sum / 10;
        sum = sum % 10;
        result = to_string(sum) + result;
        // cout << result << endl;
    }
    if(carry != 0)  
        result = to_string(carry) + result;
        // cout << result << endl << endl;
    return result;
}

int main(int argc, char *argv[])
{
    string a;
    int b;
    cin >> a >> b;
    if (a[0] == '0' || b == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << hi_mul_low(a, b) << endl;
    
    return 0;
}
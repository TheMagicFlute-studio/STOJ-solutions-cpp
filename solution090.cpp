#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string num;
    cin >> num;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
    return 0;
}

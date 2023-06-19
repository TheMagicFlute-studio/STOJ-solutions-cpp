#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string num;

    cin >> num;

    for (int i = num.length() - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ' ';
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + ' ';
        }
    }
    cout << s << endl;
    
    return 0;
}
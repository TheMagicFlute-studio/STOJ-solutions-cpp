#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    vector<char> c;
    int n;

    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            c.push_back(s[i]);
        }

        sort(c.begin(), c.end());

        do
        {
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i];
            }
            cout << endl;
        } while (next_permutation(c.begin(), c.end()));


        c.clear();
    }
    return 0;
}
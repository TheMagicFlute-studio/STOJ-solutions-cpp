#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<char> n;
    int x;
    cin >> x;

    for(int i = 1; i <= x; i++)
    {
        n.push_back(i + '0');
    }
    do
    {
        for(int i = 0; i < n.size(); i++)
        {
            cout << n[i];
            if (i != n.size() - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }
    while (next_permutation(n.begin(), n.end()));

    return 0;
}
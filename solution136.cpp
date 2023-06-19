#include <iostream>
#include <set>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        s.insert(x);
    }

    cout << s.size() << endl;
    
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
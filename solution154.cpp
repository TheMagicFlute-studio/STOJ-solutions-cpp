#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int q;
    string ans;

    cin >> q >> ans;

    for (int i = 0; i < q; i++)
    {
        int op;
        string s;

        cin >> op;

        if (op == 1)
        {
            cin >> s;
            ans += s;
            cout << ans << endl;
        }
        if (op == 2)
        {
            int a, b;
            cin >> a >> b;

            ans = ans.substr(a, b);
            cout << ans << endl;
        }
        if (op == 3)
        {
            int idx;

            cin >> idx >> s;

            ans.insert(idx, s);

            cout << ans << endl;
        }
        if (op == 4)
        {
            cin >> s;
            cout << (int)(ans.find(s) > ans.length() ? -1 : ans.find(s)) << endl;
        }
    }

    return 0;
}
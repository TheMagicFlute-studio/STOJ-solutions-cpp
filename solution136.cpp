#include <iostream>
#include <set>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    set<int> s; // 用set容器自动去重
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

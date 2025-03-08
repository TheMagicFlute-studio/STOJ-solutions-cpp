#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main(int argc, char *argv[])
{
    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        if (cnt++ & 1)
        {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        else
        {
            cout << q.front() << " ";
            q.pop();
        }
    } 
    
    return 0;
}
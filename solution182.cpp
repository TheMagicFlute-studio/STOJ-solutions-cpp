#include <iostream>

using namespace std;

int cnt = 1;

// csp-j 2024 第一轮 完善程序2
void print(char src, char tgt)
{
    cout << cnt++ << ':' << src << "->" << tgt << endl;
}

void dfs(int n, char src, char tmp, char tgt)
{
    if (n == 1)
    {
        print(src, tgt);
        return;
    }
    dfs(n - 1, src, tgt, tmp);
    print(src, tgt);
    dfs(n - 1, tmp, src, tgt);
}

int main(int argc, char *argv[])
{
    int n;
    char a, b, c;
    cin >> n >> a >> b >> c;
    dfs(n, a, b, c);
    return 0;
}
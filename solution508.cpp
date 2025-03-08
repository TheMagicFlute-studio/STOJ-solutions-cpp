#include <iostream>
#include <string>

using namespace std;

bool vis[110];

int main(int argc, char *argv[])
{
    int n, cnt = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n-1; i++)
    {
        if(str[i] == 'V' && str[i+1] == 'K')
        {
            cnt++;
            vis[i] = vis[i+1] = true;
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        if(vis[i] == false && vis[i+1] == false && ((str[i] == 'V' && str[i+1] == 'V') || (str[i] == 'K' && str[i+1] == 'K')))
        {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
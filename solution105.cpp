#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 0, cnt = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int t = i;

        bool exists_7 = 0;

        while(t != 0)
        {
            if (t % 10 == 7)
            {
                exists_7 = 1;

                break;
            }
            t /= 10;
        }

        if (i % 7 != 0 && exists_7 == 0)
        {
            cnt++;
        }
        
    }
    cout << cnt << endl;

    return 0;
}
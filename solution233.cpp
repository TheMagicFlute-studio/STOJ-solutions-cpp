#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long N, M, a = -1;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0 && N % (M - i) == 0)
        {
            a = i;

            break;
        }
    }
    cout << a << endl;
    
    return 0;
}
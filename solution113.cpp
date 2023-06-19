#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, demand, stock = 0, not_served = 0;

    cin >> stock >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> demand;
        if (demand <= stock)
        {
            stock -= demand;
            continue;
        }
        not_served++;
    }
    cout << not_served << endl;
    
    return 0;
}
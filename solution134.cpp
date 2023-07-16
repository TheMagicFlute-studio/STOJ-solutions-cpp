#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
/* solution 2

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i, j, a[100] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0, max_p = 0;
    for (i = 0; i < n - 1; i++)
    {
        max = a[i], max_p = i;
        for (j = i; j < n - 1; j++)
        {
            if (a[j + 1] > max)
            {
                max = a[j + 1];
                max_p = j + 1;
            }
        }
        swap(a[i], a[max_p]);
    }
    for (i = n; n >= 0; n--)
    {
        cout << a[n] << " ";
    }
}

*/
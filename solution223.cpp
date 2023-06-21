#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int x, maxPos = -1, maxScore = -1;

    cin >> x;

    int score[x];

    string people[x];

    for (int i = 0; i < x; i++)
    {
        cin >> score[i] >> people[i];

        if (score[i] > maxScore)
        {
            maxPos = i;
            maxScore = score[i];
        }

    }

    cout << people[maxPos] << endl;
    
    return 0;
}
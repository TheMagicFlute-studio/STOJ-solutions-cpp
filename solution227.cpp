#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string words[110], tmp;
    int idx = 1, n = 0;
    while(cin >> tmp)
    {
        words[idx++] = tmp;
    }
    sort(words, words + idx);
    for(int i = 1; i <= idx; i++)
    {
        if(words[i] != words[i - 1])
            cout << words[i] << endl;
    }

    
    return 0;
}
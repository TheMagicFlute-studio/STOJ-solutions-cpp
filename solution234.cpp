#include <iostream>
#include <string.h>

using namespace std;

int strupr_rm(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    char str[250];

    cin.getline(str, 250);

    strupr_rm(str);

    cout << str << endl;

    return 0;
}
#include <iostream>

using namespace std;

int cntSpecialChars(string chars, char specialChar)
{
    long long pos = -1;

    for (unsigned long long i = 0; i <= chars.length(); i++)
    {
        if (specialChar == chars[i])
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int main(int argc, char *argv[])
{
    string chars;
    char specialChar;

    cin >> chars >> specialChar;

    cout << cntSpecialChars(chars, specialChar) << endl;

    return 0;
}
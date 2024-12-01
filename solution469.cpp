#include <iostream>

using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return true;
    return false;
}

int main(int argc, char *argv[])
{
    int y, m, d;
    cin >> y >> m >> d;
    if(m < 1 || m > 12)
        cout << "NO";
    if(isLeapYear(y) && m == 2 && d <= 29)
        cout << "YES";
    else if(!isLeapYear(y) && d <= days[m])
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
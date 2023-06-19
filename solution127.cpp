#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int year, int month, int day)
{
    int days[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum = 0;

    for (int i = 0; i < month - 1; ++i)
    {
        sum += days[i];
    }
    return sum + day;
}

int main(int argc, char *argv[])
{
    int year, month, day;

    cin >> year >> month >> day;

    cout << dayOfYear(year, month, day) << endl;
    
    return 0;
}
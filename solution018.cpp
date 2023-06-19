#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int year, month;

    cin >> year >> month;

    if(year % 4 == 0 && month == 2)
    {
        cout << "29" << endl;
    }
    else if(month == 2)
    {
        cout << "28" << endl;
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12 || month == 8)
    {
        cout << "31" << endl;
    }
    else
    {
        cout << "30" << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int temperature;

    cin >> temperature;

    if (temperature < 18)
    {
        cout << "It's cool!" << endl;
    }
    else if (temperature < 0)
    {
        cout << "It's too cold!" << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int y;
    string animals[12] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep"};
    cin >> y;
    cout << animals[y % 12] << endl;
    return 0;
}
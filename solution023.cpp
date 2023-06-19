#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) 
    {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) 
        {
            cout << "直角三角形" << endl;
        }
        else if (acos((a * a + b * b - c * c) / (2 * a * b)) < M_PI_2 && acos((a * a + c * c - b * b) / (2 * a * c)) < M_PI_2 && acos((b * b + c * c - a * a) / (2 * b * c)) < M_PI_2) 
        {
            cout << "锐角三角形" << endl;
        }
        else
        {
            cout << "钝角三角形" << endl;
        }
    }
    else
    {
        cout << "不是三角形" << endl;
    }
    
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

double sum(double d1, double d2, double d3)
{
    return d1 + d2 + d3;
}
double average(double d1, double d2, double d3)
{
    return (d1 + d2 + d3) / 3;
}
double get_sum_of_squares(double d1, double d2, double d3)
{
    return pow(d1, 2) + pow(d2, 2) + pow(d3, 2);
}
double get_the_square_root_of_the_sum_of_squares(double d1, double d2, double d3)
{
    return sqrt(pow(d1, 2) + pow(d2, 2) + pow(d3, 2));
}

int main(int argc, char *argv[])
{
    double d1, d2, d3;

    cin >> d1 >> d2 >> d3;

    cout << sum(d1, d2, d3) << endl;

    cout << average(d1, d2, d3) << endl;

    cout << get_sum_of_squares(d1, d2, d3) << endl;

    cout << get_the_square_root_of_the_sum_of_squares(d1, d2, d3) << endl;
    
    return 0;
}
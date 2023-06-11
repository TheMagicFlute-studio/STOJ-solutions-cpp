#include <iostream>

double get_BMI(double height, double weight)
{
    return weight / (height * height);
}

double get_body_fat(double height, double weight, double age, double gender)
{
    return 1.2 * get_BMI(height, weight) + 0.23 * age - 5.4 - 10.8 * gender;
}

int main(int argc, char *argv[])
{
    using namespace std;

    double height, weight, age, gender;

    cin >> height >> weight >> age >> gender;

    cout << get_body_fat(height, weight, age, gender) << endl;

    return 0;
}
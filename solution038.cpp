#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const int SIZE = 4;
int nums[SIZE] = {3, 1, 9, 5};

double get_Average(int SIZE, int *nums)
{
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += nums[i];
    }
    return sum / SIZE;
}
double get_Median(int SIZE, int *nums)
{
    sort(nums, nums + SIZE);
    double median;
    if (SIZE % 2 == 0)
    {
        return (nums[SIZE / 2 - 1] + nums[SIZE / 2]) / 2.0;
    }
    else
    {
        return nums[SIZE / 2];
    }
}

int main(int argc, char *argv[])
{
    cout << fixed << setprecision(3) << get_Average(SIZE, nums) << " " << get_Median(SIZE, nums) << endl;
    
    return 0;
}
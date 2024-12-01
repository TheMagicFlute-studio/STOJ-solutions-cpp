#include <iostream>
#include <algorithm>

using namespace std;

struct __student
{
    int id;
    double score;
    __student(int i, double s)
    {
        id = i;
        score = s;
    }
    __student(){}
} students[110];

bool cmp(__student a, __student b)
{
    return a.score > b.score;
}

int main(int argc, char *argv[])
{
    int n, k;
    cin >> n >> k;
    int id;
    double score;
    for (int i = 0; i < n; i++)
    {
        cin >> id >> score;
        students[i] = __student(id, score);
    }
    sort(students, students + n, cmp);
    cout << students[k - 1].id << ' ' << students[k - 1].score << endl;
    
    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

struct __student
{
    string name;
    int score;
    __student(string _name, int _score)
    {
        name = _name;
        score = _score;
    }
    __student() {}
} students[1000];

bool cmp(__student a, __student b)
{
    return a.score > b.score;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    string name;
    int id, age, score;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> id >> age >> score;
        students[i] = __student(name, score);
    }
    sort(students, students + n, cmp);
    cout << students[0].name << endl;

    return 0;
}
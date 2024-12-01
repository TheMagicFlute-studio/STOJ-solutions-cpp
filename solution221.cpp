#include <iostream>
#include <algorithm>

using namespace std;

struct __student
{
    string name;
    int chinese, math, total, id;
    __student(string n, int c, int m, int i) 
    {
        name = n;
        chinese = c;
        math = m;
        total = c + m;
        id = i;
    }
    __student() {}
} students[110];

bool cmp(__student a, __student b)
{
    if(a.total != b.total)
        return a.total > b.total;
    else
        return a.id < b.id;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    string name;
    int chinese, math;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> chinese >> math;
        students[i] = __student(name, chinese, math, i);
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].chinese << " " << students[i].math << " " << students[i].total << endl;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    int id;
    int totalScore;
    int chineseScore;
    int mathScore;
    int englishScore;
};

bool compareStudents(const Student &s1, const Student &s2)
{
    if (s1.totalScore != s2.totalScore)
    {
        return s1.totalScore > s2.totalScore;
    }
    else if (s1.chineseScore != s2.chineseScore)
    {
        return s1.chineseScore > s2.chineseScore;
    }
    else
    {
        return s1.id < s2.id;
    }
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++)
    {
        students[i].id = i + 1;
        cin >> students[i].chineseScore >> students[i].mathScore >> students[i].englishScore;
        students[i].totalScore = students[i].chineseScore + students[i].mathScore + students[i].englishScore;
    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < 5; i++)
    {
        cout << students[i].id << " " << students[i].totalScore << endl;
    }

    return 0;
}
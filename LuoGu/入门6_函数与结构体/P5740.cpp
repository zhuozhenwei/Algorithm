#include <bits/stdc++.h>
using namespace std;

typedef struct Student
{
    string name; // 名字
    int C;       // 语文成绩
    int M;       // 数学成绩
    int E;       // 英语成绩
} Stu;

int main()
{
    int n;
    cin >> n;

    Stu student[n];
    int max_value = -1;
    int max_index = -1;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a, b, c;
        cin >> s >> a >> b >> c;

        student[i].name = s;
        student[i].C = a;
        student[i].M = b;
        student[i].E = c;

        if (a + b + c > max_value)
        {
            max_value = a + b + c;
            max_index = i;
        }
    }

    cout << student[max_index].name << " " << student[max_index].C << " " << student[max_index].M << " " << student[max_index].E;
    return 0;
}
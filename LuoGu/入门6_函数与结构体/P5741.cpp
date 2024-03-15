#include <bits/stdc++.h>
using namespace std;

typedef struct Student
{
    string name; // 名字
    int C;       // 语文成绩
    int M;       // 数学成绩
    int E;       // 英语成绩
    int sum;     // 总分
} Stu;

int main()
{
    int n;
    cin >> n;

    Stu student[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        int a, b, c;
        cin >> s >> a >> b >> c;

        student[i].name = s;
        student[i].C = a;
        student[i].M = b;
        student[i].E = c;
        student[i].sum = a + b + c;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(student[i].C - student[j].C) <= 5 && abs(student[i].M - student[j].M) <= 5 && abs(student[i].E - student[j].E) <= 5 && abs(student[i].sum - student[j].sum) <= 10)
            {
                if (student[i].name < student[j].name)
                {
                    cout << student[i].name << " " << student[j].name << endl;
                }
                else
                {
                    cout << student[j].name << " " << student[i].name << endl;
                }
            }
        }
    }

    return 0;
}
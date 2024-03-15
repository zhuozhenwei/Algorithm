#include <bits/stdc++.h>
using namespace std;

typedef struct Student
{
    int id;            // 学号
    int study_score;   // 学业成绩
    int quality_score; // 素质拓展成绩

    string rank(struct Student stu)
    {
        string res;
        int sum = stu.study_score * 7 + stu.quality_score * 3;
        if ((stu.study_score + stu.quality_score > 140) && (sum >= 800))
        {
            res = "Excellent";
        }
        else
        {
            res = "Not excellent";
        }
        return res;
    }
} Stu;

int main()
{
    int n;
    cin >> n;

    Stu stu[n];
    string res[n];
    for (int i = 0; i < n; i++)
    {
        int num, study, qua;
        cin >> num >> study >> qua;

        stu[i].id = num;
        stu[i].study_score = study;
        stu[i].quality_score = qua;

        res[i] = stu[i].rank(stu[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
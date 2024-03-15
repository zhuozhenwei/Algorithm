#include <bits/stdc++.h>
using namespace std;

typedef struct Stu
{
    string name;
    int age;
    int score;
} Stu;

int main()
{
    int n;
    cin >> n;
    Stu stu[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;

        stu[i].name = s;
        stu[i].age = a;
        stu[i].score = b;

        stu[i].age += 1;
        stu[i].score = ((double)(stu[i].score) * 1.2 > 600.0) ? 600 : (int)((double)(stu[i].score) * 1.2);
    }

    for (int i = 0; i < n; i++)
    {
        cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
    }

    return 0;
}
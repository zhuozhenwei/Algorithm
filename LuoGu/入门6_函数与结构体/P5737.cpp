#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

bool isRun(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int year1 = 1989;
    int year2 = 2001;

    int num = 0;
    for (int i = year1; i <= year2; i++)
    {
        if (isRun(i) == true)
        {
            num++;
            vec.push_back(i);
        }
    }

    cout << num << endl;

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    cout << "Time:" << (double)clock() / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l[3];
    cin >> l[0] >> l[1] >> l[2];

    sort(l, l + 3);

    if (l[0] + l[1] <= l[2]) // 无法构成三角形
    {
        cout << "Not triangle" << endl;
    }
    else
    {
        if (l[0] * l[0] + l[1] * l[1] == l[2] * l[2])
        {
            cout << "Right triangle" << endl;
        }
        else if (l[0] * l[0] + l[1] * l[1] > l[2] * l[2])
        {
            cout << "Acute triangle" << endl;
        }
        else
        {
            cout << "Obtuse triangle" << endl;
        }

        if ((l[0] == l[1]) || (l[1] == l[2]))
        {
            cout << "Isosceles triangle" << endl;
        }
        if ((l[0] == l[1]) && (l[1] == l[2]))
        {
            cout << "Equilateral triangle" << endl;
        }
    }
    return 0;
}
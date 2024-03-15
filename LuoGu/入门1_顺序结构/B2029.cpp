#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

int main()
{
    int h, r;
    cin >> h >> r;
    double res = 20000.0 / (PI * r * r * h);
    cout << ceil(res) << endl;
    return 0;
}
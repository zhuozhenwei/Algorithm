<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 13.056, result;
    result = log(x);
    cout << "log(x) = " << result << endl;

    x = -3.591;
    result = log(x);
    cout << "log(x) = " << result << endl;

    x = 0;
    result = log(x);
    cout << "log(x) = " << result << endl;

=======
#include <bits/stdc++.h>
using namespace std;

string str;
string sum_str;

int main()
{
    while (scanf("%s", &str) != EOF)
    {
        sum_str.append(str);
    }
    cout << sum_str;
>>>>>>> 9e17faf (2024/3/15)
    return 0;
}
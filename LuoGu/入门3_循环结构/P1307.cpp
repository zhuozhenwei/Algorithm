#include <iostream>
using namespace std;

int numa = 0;
int numb = 0;

int main()
{
    for (cin >> numa; numa != 0; numa /= 10)
    {
        numb = numb * 10 + numa % 10;
        // cout << numa << " " << numb << endl;
    }
    cout << numb;
}
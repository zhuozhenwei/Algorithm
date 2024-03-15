#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ISBN[14];
    for (int i = 0; i < 13; i++)
    {
        cin >> ISBN[i];
    }

    char mod[12] = "0123456789X";
    int sum = 0;
    int j = 0;

    for (int i = 0; i < 12; i++)
    {
        if (ISBN[i] == '-')
        {
            continue;
        }

        j += 1;
        sum += (ISBN[i] - '0') * j;
    }

    if (mod[sum % 11] == ISBN[12])
    {
        cout << "Right";
    }
    else
    {
        ISBN[12] = mod[sum % 11];
        printf("%s", ISBN);
    }

    return 0;
}
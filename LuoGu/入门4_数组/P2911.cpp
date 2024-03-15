#include <bits/stdc++.h>
using namespace std;

int main()
{
<<<<<<< HEAD
    // 这个问题的核心在于求出数组中各种不同的数字出现的次数
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int a[s1 * s2 * s3];
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            for (int k = 0; k < s3; k++)
            {
                a[i * j * k] = i + 1 + j + 1 + k + 1;
=======
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    vector<int> v;
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                v.push_back(i + j + k);
>>>>>>> 9e17faf (2024/3/15)
            }
        }
    }

<<<<<<< HEAD
    
=======
    vector<int> key; // 记录下面字典中所有的键值

    map<int, int> dict;

    for (int i = 0; i < s1 * s2 * s3; i++)
    {
        vector<int>::iterator it = find(key.begin(), key.end(), v.at(i));
        if ((it - key.begin()) < key.size()) // 原先有
        {
            dict[v.at(i)] += 1;
        }
        else // 原先没有
        {
            dict.insert(pair<int, int>(v.at(i), 1));
            key.push_back(v.at(i));
        }
    }

    // 开始找次数最大的和数
    int a = dict.begin()->first;
    int b = dict.begin()->second;

    map<int, int>::iterator iter;
    for (iter = dict.begin(); iter != dict.end(); iter++)
    {
        if (iter->second > b)
        {
            b = iter->second;
            a = iter->first;
        }
        else if (iter->second == b)
        {
            if (iter->first < a) // 当次数相同时，选择和数小的那个
            {
                a = iter->first;
            }
        }
        else
        {
            a = a;
            b = b;
        }
    }
    cout << a;

>>>>>>> 9e17faf (2024/3/15)
    return 0;
}
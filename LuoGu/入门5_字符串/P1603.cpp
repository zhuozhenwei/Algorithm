#include <bits/stdc++.h>
using namespace std;

string s[7];
string res;
vector<string> v;
map<string, string> num;

int main()
{
    // 输入+初始化
    num.insert(pair<string, string>("zero", "00"));
    num.insert(pair<string, string>("one", "01"));
    num.insert(pair<string, string>("two", "04"));
    num.insert(pair<string, string>("three", "09"));
    num.insert(pair<string, string>("four", "16"));
    num.insert(pair<string, string>("five", "25"));
    num.insert(pair<string, string>("six", "36"));
    num.insert(pair<string, string>("seven", "49"));
    num.insert(pair<string, string>("eight", "64"));
    num.insert(pair<string, string>("nine", "81"));
    num.insert(pair<string, string>("ten", "00"));
    num.insert(pair<string, string>("eleven", "21"));
    num.insert(pair<string, string>("twelve", "44"));
    num.insert(pair<string, string>("thirteen", "69"));
    num.insert(pair<string, string>("fourteen", "96"));
    num.insert(pair<string, string>("fifteen", "25"));
    num.insert(pair<string, string>("sixteen", "56"));
    num.insert(pair<string, string>("seventeen", "89"));
    num.insert(pair<string, string>("eighteen", "24"));
    num.insert(pair<string, string>("nineteen", "61"));
    num.insert(pair<string, string>("twenty", "00"));
    num.insert(pair<string, string>("a", "01"));
    num.insert(pair<string, string>("both", "04"));
    num.insert(pair<string, string>("another", "01"));
    num.insert(pair<string, string>("first", "01"));
    num.insert(pair<string, string>("second", "04"));
    num.insert(pair<string, string>("third", "09"));
    for (int i = 0; i < 7; i++)
    {
        cin >> s[i];
    }

    // 遍历句子，找出数字放到向量中
    map<string, string>::iterator it;
    for (int i = 0; i < 6; i++)
    {
        it = num.find(s[i]);
        if (it != num.end()) // 是数字
        {
            v.push_back(num[s[i]]);
        }
    }

    // 特例，没有与数字相关的单词
    if (v.size() == 0)
    {
        cout << 0;
        return 0;
    }

    // 从小到大排序
    sort(v.begin(), v.end());

    // 输出
    vector<string>::iterator ite;
    for (ite = v.begin(); ite != v.end(); ite++)
    {
        res += *ite;
    }

    // 数据流将字符串转整型
    stringstream ss;
    ss << res;
    long long int a;
    ss >> a;
    cout << a;

    return 0;
}
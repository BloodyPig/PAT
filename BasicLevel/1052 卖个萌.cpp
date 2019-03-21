//有一个测试点没通过 原因不明
//注意最后输出的转义字符
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<string> split(string str, string sp)
{
    /*
    vector<string> v;
    //获得分割字符集
    set<char> s;
    for (int i = 0; i < sp.length(); i++)
    {
        s.insert(sp[i]);
    }
    int flag = 0;
    //分割字符串存入V
    for (int i = 0; i < str.length(); i++)
    {
        if (s.count(str[i]) || i == str.length() - 1)
        {
            string temp = str.substr(flag, i - flag);
            //分割一次更新一次标志位
            flag = i + 1;
            //不存入空字符串
            if (temp != "")
                v.push_back(temp);
        }
    }
    return v;
    */
    vector<string> row;
    int j = 0, k = 0;
    while (j < str.length())
    {
        if (str[j] == '[')
        {
            while (k++ < str.length())
            {
                if (str[k] == ']')
                {
                    row.push_back(str.substr(j + 1, k - j - 1));
                    break;
                }
            }
        }
        j++;
    }
    return row;
}

int main()
{
    string h, e, m;
    int n;
    getline(cin, h);
    getline(cin, e);
    getline(cin, m);
    cin >> n;
    string sp = "[ ]";
    //分割存入对应数组
    vector<string> hand = split(h, sp);
    vector<string> eye = split(e, sp);
    vector<string> mouth = split(m, sp);

    int a, b, c, d, ee;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> ee;

        if (a > hand.size() || b > eye.size() || c > mouth.size() || d > eye.size() || ee > hand.size())
            cout << "Are you kidding me? @\\/@" << endl;
        else
            cout << hand[a - 1] << "(" << eye[b - 1] << mouth[c - 1] << eye[d - 1] << ")" << hand[ee - 1] << endl;
    }

    system("pause");
    return 0;
}

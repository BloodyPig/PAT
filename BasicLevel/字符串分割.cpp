#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<string> split(string str, string sp)
{
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
}

int main()
{
    string s = "h#e,l$l(o,w)orld!hhhh&666****";
    string sp = ",!&#$*()";
    vector<string> v = split(s, sp);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    system("pause");
    return 0;
}

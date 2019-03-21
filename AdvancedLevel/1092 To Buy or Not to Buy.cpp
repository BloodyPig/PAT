//用ascii码表的数值最为散列的key建立字符的哈希散列
//最后记录一下缺少的额=即可
#include <iostream>
using namespace std;

int main()
{
    string s;
    string str;
    cin >> s >> str;
    int leak = 0;
    int ascii[255] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        ascii[s[i]] += 1;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (ascii[str[i]] != 0)
        {
            ascii[str[i]]--;
        }
        else
            leak += 1;
    }
    if (leak == 0)
        cout << "Yes " << s.length() - str.length();
    else
        cout << "No " << leak;
    system("pause");
    return 0;
}
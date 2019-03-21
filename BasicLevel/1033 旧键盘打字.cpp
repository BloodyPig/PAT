#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string wrong;
    string str;
    getline(cin, wrong);
    getline(cin, str);

    //用到字符串的一个find函数 就是B中的字符是否能在A中找到
    for (int i = 0; i < str.length(); i++)
    {
        //键坏掉了
        if (wrong.find(toupper(str[i])) != string::npos)
            continue;
        //键没坏大写不了
        if (isupper(str[i]) && wrong.find('+') != string::npos)
            continue;
        //空格坏了
        if (str[i] == ' ' && wrong.find('_') != string::npos)
            continue;
        cout << str[i];
    }

    system("pause");
    return 0;
}
/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 
只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
*/
#include <iostream>
#include <string>
using namespace std;

bool isValid(string str)
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int i = 0;

    while (i < str.size() && str[i] == 'A')
    {
        i++;
        count1++;
    }
    if (str[i] == 'P')
        i++;
    else
        return false;
    while (i < str.size() && str[i] == 'A')
    {
        i++;
        count2++;
    }
    if (str[i] == 'T')
        i++;
    else
        return false;
    while (i < str.size() && str[i] == 'A')
    {
        i++;
        count3++;
    }
    if(count2 == 0)
        return false;
    return count3 == count1 * count2;
}

int main()
{
    string str;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (isValid(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    system("pause");
    return 0;
}

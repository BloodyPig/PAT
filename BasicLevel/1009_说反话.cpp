/*
    算法核心是字符串的反转
    先反转所有字符，再根据空格符分割单词，反转单词
    这种方法无法获得满分
*/
/*
#include <iostream>
#include <string>
using namespace std;

void trans(int start, int end, string &s)
{
    char a;
    while (start < end)
    {
        a = s[start];
        s[start] = s[end];
        s[end] = a;
        start++;
        end--;
    }
}

int main()
{
    string s;
    getline(cin, s);
    int start = 0;
    int end = s.length() - 1;
    trans(start, end, s);
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == ' ')
        {
            end = i - 1;
            trans(start, end, s);
            start = i + 1;
        }
    }

    trans(end + 2, s.length() - 1, s);
    cout << s;

    system("pause");
    return 0;
}
*/

/*
    倒序查找然后空格分割位置并输出
*/

#include "iostream"
#include "string"
using namespace std;
void out_fun(int b, int e, string s)
{
    int i = b;
    while (b <= e)
    {
        cout << s[b];
        b++;
    }
    if (i == 0)
        return;
    else
        cout << ' ';
}
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int tmp = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            out_fun(i + 1, tmp, s);
            tmp = i - 1;
        }
        if (i == 0)
        {
            out_fun(0, tmp, s);
        }
    }
    system("pause");
    return 0;
}
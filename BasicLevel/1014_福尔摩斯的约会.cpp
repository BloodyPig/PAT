/*
大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。
大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，
因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；
第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；
后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。
现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int i = 0, j = 0, pos;
    char t[2];
    string week[] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    while (i < s1.length() && i < s2.length())
    {
        if (s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G'))
        {
            t[0] = s1[i];
            break;
        }
        i++;
    }
    i++;
    while (i < s1.length() && i < s2.length()) {
        if (s1[i] == s2[i] && ((s1[i] >= 'A' && s1[i] <= 'N') || isdigit(s1[i]))) {
            t[1] = s1[i];
            break;
        }
        i++;
    }
    while (j < s3.length() && j < s4.length())
    {
        if (s3[j] == s4[j] && isalpha(s3[j]))
        {
            pos = j;
            break;
        }
        j++;
    }
    cout << week[t[0] - 'A'];
    printf("%02d:%02d", isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10, pos);
    system("pause");
    return 0;
}

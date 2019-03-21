//构造数组数各字母数量
#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int ch[26] = {0};
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i]))
            ch[s[i] - 'a']++;
    int max = ch[0], t = 0;
    for (int i = 1; i < 26; i++)
    {
        if (ch[i] > max)
        {
            max = ch[i];
            t = i;
        }
    }
    printf("%c %d", t + 'a', max);
    system("pause");
    return 0;
}
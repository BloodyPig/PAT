//双层循环 内层循环中分割外层循环长度的字符串反转比较值
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string t;
    int max = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        for (int j = 0; j <= s.length() - i; j++)
        {
            t = s.substr(j, i);
            string tt = t;
            reverse(t.begin(), t.end());
            if (t == tt)
                max = max > t.length() ? max : t.length();
        }
    }
    cout << max;
    system("pause");
    return 0;
}

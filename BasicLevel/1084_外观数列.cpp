#include <iostream>
using namespace std;

int main()
{
    string s;
    int n, cnt;
    cin >> s >> n;
    int i, j;
    //最外层循环算到第八项
    for (cnt = 1; cnt < n; cnt++)
    {
        string t;
        //在S的长度内进行判断
        for (i = 0; i < s.length(); i = j)
        {
            //记录下与当前字符相同的字符个数 只是记录j 不执行任何其他操作 注意这个 分号 自成一行
            for (j = i; j < s.length() && s[j] == s[i]; j++)
                ;
            t += s[i] + to_string(j - i);
        }
        s = t;
    }
    cout << s << endl;
    system("pause");
    return 0;
}
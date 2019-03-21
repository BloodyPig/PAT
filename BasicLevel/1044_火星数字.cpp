//注意数字可以被13整除
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string low[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string high[] = {"666", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        int num = atoi(s.c_str());

        if (s[0] >= '0' && s[0] <= '9')
        {
            if (num <= 12)
                cout << low[num % 13] << endl;
            else if (num % 13 == 0)
                cout << high[num / 13] << endl;
            else
                cout << high[num / 13] << " " << low[num % 13] << endl;
        }
        else
        {
            if (s.length() == 3)
            {
                for (int j = 0; j < 13; j++)
                {
                    if (s == low[j])
                        cout << j << endl;
                    if (s == high[j])
                        cout << j * 13 << endl;
                }
            }
            else
            {
                string t = s.substr(0, 3);
                string tt = s.substr(4, 7);
                int sum = 0;
                for (int j = 0; j < 13; j++)
                {
                    if (t == high[j])
                        sum += j * 13;
                    if (tt == low[j])
                        sum += j;
                }
                cout << sum << endl;
            }
        }
    }

    system("pause");
    return 0;
}
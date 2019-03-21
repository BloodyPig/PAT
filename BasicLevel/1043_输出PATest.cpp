#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char ch[7] = {'P', 'A', 'T', 'e', 's', 't'};
    int sum[7] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (s[i] == ch[j])
                sum[j] += 1;
        }
    }
    int flag = 0;
    for (int j = 0; j < 7; j++)
        if (sum[j] != 0)
            flag += 1;

    while (flag != 0)
    {
        for (int j = 0; j < 7; j++)
        {
            if (sum[j] != 0)
            {
                cout << ch[j];
                sum[j] -= 1;
                if (sum[j] == 0)
                    flag--;
            }
        }
    }
    system("pause");
    return 0;
}
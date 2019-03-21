//先把E前小数部分表示出来，根据指数大小和正负调整输出时小数点位置，注意补0
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int E = 0;
    int z = 0;
    string result;

    while (s[E] != 'E')
        E++;
    result = s.substr(1, E - 1);
    for (int i = E + 2; i < s.length(); i++)
        z = z * 10 + s[i] - '0';
    if (s[0] == '-')
        cout << "-";
    if (s[E + 1] == '-')
    {
        cout << "0.";
        for (int i = 0; i < z - 1; i++)
            cout << '0';
        for (int i = 0; i < result.length(); i++)
            if (result[i] != '.')
                cout << result[i];
    }
    else
    {
        cout << result[0];
        int cnt, j;
        for (j = 2, cnt = 0; j < result.length() && cnt < z; cnt++, j++)
            cout << result[j];
        if (j == result.length())
            for (int k = 0; k < z - cnt; k++)
                cout << '0';
        else
        {
            cout << '.';
            for (j; j < result.length(); j++)
                cout << result[j];
        }
    }

    system("pause");
    return 0;
}

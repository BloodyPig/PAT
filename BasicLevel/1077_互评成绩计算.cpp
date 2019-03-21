//教师评分和学生互评分开处理
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int g2, g1 = 0, cnt = -2, temp, maxn = -100, minn = m + 1;
        cin >> g2;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> temp;
            if (temp >= 0 && temp <= m)
            {
                if (temp > maxn)
                    maxn = temp;
                if (temp < minn)
                    minn = temp;
                g1 += temp;
                cnt++;
            }
        }
        cout << int((((g1 - minn - maxn) * 1.0 / cnt) + g2) / 2 + 0.5) << endl;
    }

    system("pause");
    return 0;
}
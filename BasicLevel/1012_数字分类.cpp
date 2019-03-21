/***
 * 给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
A​1​​  = 能被 5 整除的数字中所有偶数的和；
A​2​​  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n​1​​ −n​2​​ +n​3​​ −n​4​​ ⋯；
A​3​​  = 被 5 除后余 2 的数字的个数；
A​4​​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A​5= 被 5 除后余 4 的数字中最大数字。
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> v[5];
    int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    float a4 = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v[num % 5].push_back(num);
    }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == 0 && v[i][j] % 2 == 0)
                a1 += v[i][j];
            if (i == 1 && j % 2 == 0)
                a2 += v[i][j];
            if (i == 1 && j % 2 == 1)
                a2 -= v[i][j];
            if (i == 3)
                a4 += v[i][j];
            if (i == 4 && v[i][j] > a5)
                a5 = v[i][j];
        }

    for (int i = 0; i < 5; i++)
    {
        if (i != 0)
            printf(" ");
        if (i == 0 && a1 == 0 || i != 0 && v[i].size() == 0)
        {
            printf("N");
            continue;
        }
        if (i == 0)
            printf("%d", a1);
        if (i == 1)
            printf("%d", a2);
        if (i == 2)
            printf("%d", v[2].size());
        if (i == 3)
            printf("%.1f", a4 / v[3].size());
        if (i == 4)
            printf("%d", a5);
    }

    system("pause");
    return 0;
}

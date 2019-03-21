/*
给定数字 0-9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。
目标是使得最后得到的数尽可能小（注意 0 不能做首位）。
例如：给定两个 0，两个 1，三个 5，一个 8，我们得到的最小的数就是 10015558。
现给定数字，请编写程序输出能够组成的最小的数。
*/
#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int flag = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] > 0 && flag == 0 && i != 0)
        {
            flag = i;
            a[i] -= 1;
        }
    }
    printf("%d", flag);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            printf("%d", i);
        }
    }
    system("pause");
    return 0;
}

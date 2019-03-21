/*
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），
换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n / 100; i++)
        cout << "B";
    n = n % 100;
    for (int i = 0; i < n / 10; i++)
        cout << "S";
    n = n % 10;
    for (int i = 0; i < n; i++)
        cout << i + 1;
    system("pause");
    return 0;
}

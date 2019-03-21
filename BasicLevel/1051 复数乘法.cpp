//一个测试点错误 没有考虑四舍五入 数据类型为double才通过
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    double r = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
    double p = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);
    if (r + 0.005 >= 0 && r < 0)
        printf("0.00");
    else
        printf("%.2f", r);
    if (p >= 0)
        printf("+%.2fi", p);
    else if (p + 0.005 >= 0 && p < 0)
        printf("+0.00i");
    else
        printf("%.2fi", p);

    system("pause");
    return 0;
}
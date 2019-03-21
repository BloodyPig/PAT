/*给定区间 [−2^31,2^31] 内的 3 个整数 A、B 和 C，请判断 A+B 是否大于 C。
    数据ABC声明成长整型
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long int a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        printf("Case #%d: %s\n", i + 1, (a + b) > c ? "true" : "false");
    }
    system("pause");
    return 0;
}

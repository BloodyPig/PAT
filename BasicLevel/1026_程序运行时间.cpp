//不足一秒要四舍五入到一秒
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int CLK_TCK = 100;
    int t = (b - a + 50) / CLK_TCK;
    int H = t / (60 * 60);
    t = t % (60 * 60);
    int M = t / 60;
    t = t % 60;
    printf("%02d:%02d:%02d", H, M, t);
    system("pause");
    return 0;
}
//不是很习惯这种循环条件是输入流的写法
#include <iostream>
using namespace std;
int main()
{
    int a, now = 0, sum = 0;
    cin >> a;
    while (cin >> a)
    {
        if (a > now)
            sum = sum + 6 * (a - now);
        else
            sum = sum + 4 * (now - a);
        now = a;
        sum += 5;
    }
    cout << sum;
    system("pause");
    return 0;
}
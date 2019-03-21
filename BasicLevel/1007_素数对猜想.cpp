/*
    这道题之前几次提交最后总是提示超时，查看网上解析，在素数的判断中，条件结束写成 i*i <= n 节约了不少时间
    这道题题目在于把握题目中两个素数差为2 称之为一个素数对
    不能够求出范围内的素数个数然后除以2
*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int num = 0;
    for (int i = 5; i <= n; i++)
    {
        if (isPrime(i) && isPrime(i - 2))
            num++;
    }
    cout << num;
    system("pause");
    return 0;
}

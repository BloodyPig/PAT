/*
    令 P​i​​  表示第 i 个素数。现任给两个正整数 M≤N≤10​4​​ ，请输出 P​M​​  到 P​N​​  的所有素数
**/
#include <iostream>
#include <vector>
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
    int m, n;
    cin >> m >> n;
    int cnt = 0, num = 2;
    vector<int> v;
    while (cnt < n)
    {
        if (isPrime(num))
        {
            cnt++;
            if (cnt >= m)
                v.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cnt++;
        if (cnt % 10 != 1)
            printf(" ");
        printf("%d", v[i]);
        if (cnt % 10 == 0)
            printf("\n");
    }
    system("pause");
    return 0;
}

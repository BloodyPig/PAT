#include <iostream>
#include <cmath>
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
    int l, k;
    string s;
    int temp, pos = -1;
    int i, j;
    cin >> l >> k >> s;

    if (l == k)
    {
        for (j = 0; j < k; j++)
            temp = temp + (s[i + j] - '0');
        if (isPrime(temp) == true)
            pos = 0;
    }
    else
    {
        for (i = 0; i + k <= l; i++)
        {
            temp = 0;
            for (j = 0; j < k; j++)
            {
                temp = temp * 10 + (s[i + j] - '0');
            }
            if (isPrime(temp) == true)
            {
                pos = i;
                break;
            }
        }
    }

    if (pos != -1)
        for (i = 0; i < k; i++)
            cout << s[pos + i];
    else
        cout << "404";
    system("pause");
    return 0;
}
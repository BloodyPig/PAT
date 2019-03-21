//构造散列存储key和value 四次循环不是很好看
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;

    int t;
    float tt;
    float v[10001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> tt;
        v[t] += tt;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> tt;
        v[t] += tt;
    }
    int sum = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (v[i] != 0)
            sum++;
    }
    cout << sum;
    for (int i = 10000; i >= 0; i--)
    {
        if (v[i] != 0)
        {
            printf(" %d %.1f", i, v[i]);
        }
    }

    system("pause");
    return 0;
}
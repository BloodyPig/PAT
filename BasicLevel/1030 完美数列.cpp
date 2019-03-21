#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    long long p;
    cin >> n >> p;
    vector<long long> v(n);
    long long max = LLONG_MIN, min = LLONG_MAX;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    // 最小值不变时候可以保证正确
    // while (true)
    // {
    //     min = v[0];
    //     max = v[v.size() - 1];
    //     if (max <= min * p)
    //         break;
    //     else
    //         v.pop_back();
    // }

    //从长度0开始试出来这个长度
    int len = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + len; j < n; j++)
        {
            if (v[j] <= v[i] * p)
            {
                temp = j - i + 1;
                len = temp > len ? temp : len;
            }
            else
                break;
        }
    }

    cout << len;
    system("pause");
    return 0;
}
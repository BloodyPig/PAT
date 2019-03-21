/*
//提示存在段错误 不明原因
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum[10001];
    int k, temp;
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> k >> temp;
        sum[k] += temp;
        max = sum[max] > sum[k] ? max : k;
    }
    cout << max << " " << sum[max];
    system("pause");
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> a(N + 1);
    int num, score;
    for (int i = 0; i < N; i++)
    {
        cin >> num >> score;
        a[num] += score;
    }
    int max = a[1], t = 1;
    for (int i = 2; i <= N; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            t = i;
        }
    }
    cout << t << " " << max;
    return 0;
}
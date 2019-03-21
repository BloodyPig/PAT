#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> max;
    vector<int> sum(n);
    int temp;
    int maxI = 0;
    int maxValue;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            sum[j] += temp;
        }
    }
    for (int i = 0; i < n; i++)
        maxI = sum[maxI] > sum[i] ? maxI : i;

    for (int i = 0; i < n; i++)
        if (sum[maxI] == sum[i])
            max.push_back(i);

    cout << sum[maxI] << endl;
    for (int i = 0; i < max.size(); i++)
    {
        cout << max[i] + 1;
        if (i + 1 != max.size())
            cout << " ";
    }
    system("pause");
    return 0;
}
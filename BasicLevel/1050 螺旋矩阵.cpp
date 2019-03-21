#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main()
{
    int N;
    int m, n;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), cmp);

    //求出生成矩阵的行列值
    n = sqrt((double)N);
    while (n >= 1)
    {
        if (N % n == 0)
            break;
        n--;
    }
    m = N / n;

    vector<vector<int>> b(m, vector<int>(n));

    int pos = 0;
    // 循环次数
    // int level = m / 2 + m % 2;
    // for (int i = 0; i < level; i++)
    // {
    //     //向右 行为i 列从 i ~ n-1 -i
    //     for (int j = i; j <= n - i - 1 && pos < N; j++)
    //         b[i][j] = v[pos++];
    //     //向下 列为n-1-i 行从 i+1 ~ m-1
    //     for (int j = i + 1; j <= m - i - 2 && pos < N; j++)
    //         b[j][n - 1 - i] = v[pos++];
    //     //向左 行为m-1-i 列从 n-1-i ~ i
    //     for (int j = n - i - 1; j >= i && pos < N; j--)
    //         b[m - i - 1][j] = v[pos++];
    //     //向上 列为i 行从 m-i-2 ~ i+1
    //     for (int j = m - i - 2; j >= i + 1 && pos < N; j--)
    //         b[j][i] = v[pos++];
    // }

    //这个算法更好理解 但是一个测试点发生段错误 不知道为啥
    int top = 0;
    int left = 0;
    int right = n - 1;
    int bottom = m - 1;
    int j = 0, i = 0;
    while (pos < N)
    {
        //向右
        while (pos < N && j < right)
            b[i][j++] = v[pos++];
        //向下
        while (pos < N && i < bottom)
            b[i++][j] = v[pos++];
        //向左
        while (pos < N && j > left)
            b[i][j--] = v[pos++];
        //向上
        while (pos < N && i > top)
            b[i--][j] = v[pos++];
        top++;
        left++;
        right--;
        bottom--;
        i++;
        j++;
        //最后一个的处理
        if (pos == N - 1)
            b[i][j] = v[pos++];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", b[i][j]);
            if (j != n - 1)
                printf(" ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
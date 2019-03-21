// //报一个错误和一个段错误
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n+1);
//     int t;
//     int a = n;
//     while (a--)
//     {
//         cin >> t;
//         for (int i = 1; i < t; i++)
//             v[i]++;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (v[i] <i)
//         {
//             cout << i-1;
//             break;
//         }
//     }

//     system("pause");
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];
bool cmp1(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, cmp1);
    int ans = 0, p = 1;
    while (ans <= n && a[p] > p)
    {
        ans++;
        p++;
    }
    printf("%d", ans);
    return 0;
}
//就是算排序后的大半边减去小半边
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n / 2; i++)
        sum1 += v[i];
    cout << n % 2 << " " << sum - 2 * sum1;
    system("pause");
    return 0;
}
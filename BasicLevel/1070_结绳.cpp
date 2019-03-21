//必须将结果的初值设置为数组第一个元素 否则只有一段绳子结果是错误的
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *num = new int[n];
    
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    int sum = num[0];
    for (int i = 0; i < n; i++)
        sum = (sum + num[i]) / 2;
    printf("%d", sum);

    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //第i项会出现 (n - i +1) * i 次
    double *a = new double[n];
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i] * i * (n - i + 1);
    }
    printf("%.2f", sum);
    system("pause");
    return 0;
}
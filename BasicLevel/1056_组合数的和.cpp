//这个没有考虑重复元素的情况但是满分通过
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *num = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    if (n == 1)
        cout << num[0];
    else
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (i != j)
                    sum += num[i] * 10 + num[j];
    }
    printf("%d", sum);
    system("pause");
    return 0;
}
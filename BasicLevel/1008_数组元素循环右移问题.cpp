/**
 * 
 * 在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格
*/
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *num = new int[n];
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        num[(k + i) % n] = m;
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i];
        if(i!=n-1)
            cout<<" ";
    }
    system("pause");
    return 0;
}

//输入在一行中给出正方形边长 N（3≤N≤20）和组成正方形边的某种字符 C，间隔一个空格。

#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    int i = 0, j = 0;
    scanf("%d %c", &n, &c);
    for (i = 0; i < n; i++)
        printf("%c", c);
    cout << endl;
    for (i = 0; i < n / 2 + n % 2 - 2; i++)
    {
        cout << c;
        for (int k = 0; k < n - 2; k++)
            cout << " ";
        cout << c << endl;
    }
    for (int i = 0; i < n; i++)
        cout << c;
    system("pause");
    return 0;
}
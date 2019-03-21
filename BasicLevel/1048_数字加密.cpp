//考虑到位数相差较多时候的补位操作 为了使用append函数才将数字逆置
#include <iostream>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b;
    int lena = a.length();
    int lenb = b.length();
    //逆序存放两个数
    for (int i = 0; i <= lena / 2 - 1; i++)
        swap(a[i], a[lena - 1 - i]);
    for (int i = 0; i <= lenb / 2 - 1; i++)
        swap(b[i], b[lenb - 1 - i]);
    //较短数字补齐位数 补0
    if (lena > lenb)
        b.append(lena - lenb, '0');
    else
        a.append(lenb - lena, '0');
    string str = "0123456789JQK";
    //根据奇偶逐位安排
    for (int i = 0; i < a.length(); i++)
    {
        if (i % 2 == 0)
        {
            c += str[(a[i] - '0' + b[i] - '0') % 13];
        }
        else
        {
            int temp = b[i] - a[i];
            if (temp < 0)
                temp = temp + 10;
            c += str[temp];
        }
    }
    //逆序输出
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
    system("pause");
    return 0;
}
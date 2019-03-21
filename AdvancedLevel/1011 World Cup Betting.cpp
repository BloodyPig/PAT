//字符数组存一下三次结果，获利直接加起来，最后计算一下
#include <iostream>
using namespace std;

int main()
{
    float w, t, l;
    int n = 3;
    float sum = 1;
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> w >> t >> l;
        if (w > t && w > l)
        {
            s[i] = 'W';
            sum *= w;
        }
        else if (t > w && t > l)
        {
            s[i] = 'T';
            sum *= t;
        }
        else
        {
            s[i] = 'L';
            sum *= l;
        }
    }
    printf("%c %c %c %.2f", s[0], s[1], s[2], (sum * 0.65 - 1) * 2);
    system("pause");
    return 0;
}
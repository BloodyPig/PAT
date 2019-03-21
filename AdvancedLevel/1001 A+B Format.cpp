
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        cout << s[i];
        if (s[i] == '-')
            continue;
        //这个判断是算法精髓 需要输出，的位置是长度%3的位置处
        if ((i + 1) % 3 == len % 3 && i != len - 1)
            cout << ",";
    }
    system("pause");
    return 0;
}
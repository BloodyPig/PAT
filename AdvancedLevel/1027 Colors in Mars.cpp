//最简单的映射关系
#include <iostream>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    string s = "0123456789ABC";
    cout << "#" << s[r / 13] << s[r % 13] << s[g / 13] << s[g % 13] << s[b / 13] << s[b % 13];
    system("pause");
    return 0;
}
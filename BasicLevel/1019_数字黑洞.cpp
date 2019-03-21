//考虑位数不足四位时候补 '0'
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char a, char b) { return a > b; }
int main()
{
    string s;
    cin >> s;
    string a, b;
    int result;
    s.insert(0, 4 - s.length(), '0');
    do
    {
        a = s, b = s;
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end());
        result = stoi(a) - stoi(b);
        s = to_string(result);
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    } while (s != "6174" && s != "0000");
    system("pause");
    return 0;
}

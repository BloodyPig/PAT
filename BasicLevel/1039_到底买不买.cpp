#include <iostream>
using namespace std;

int main()
{
    string s;
    string str;
    cin >> s >> str;
    int leak = 0;
    int ascii[255] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        ascii[s[i]] += 1;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (ascii[str[i]] != 0)
        {
            ascii[str[i]]--;
        }
        else
            leak += 1;
    }
    if (leak == 0)
        cout << "Yes " << s.length() - str.length();
    else
        cout << "No " << leak;
    system("pause");
    return 0;
}
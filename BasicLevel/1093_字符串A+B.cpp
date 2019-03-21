#include <iostream>
#include <vector>
using namespace std;

bool find(vector<char> s, char c)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] == c)
            return true;
    return false;
}

int main()
{
    string a, b;
    vector<char> s;

    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
        if (!find(s, a[i]))
            s.push_back(a[i]);
    for (int i = 0; i < b.length(); i++)
        if (!find(s, b[i]))
            s.push_back(b[i]);
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    system("pause");
    return 0;
}
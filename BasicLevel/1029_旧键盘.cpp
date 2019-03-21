#include <iostream>
#include <set>
using namespace std;

int main()
{
    string key, s;
    cin >> key >> s;
    set<char> ss;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
        ss.insert(s[i]);
    }
    for (int i = 0; i < key.length(); i++)
    {
        key[i] = toupper(key[i]);
        if (ss.count(key[i]) == 0)
        {
            ss.insert(key[i]);
            printf("%c", key[i]);
        }
    }
    system("pause");
    return 0;
}
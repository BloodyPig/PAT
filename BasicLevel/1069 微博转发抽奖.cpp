//查找准确输出的昵称号与S的关系
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int m, n, s;
    cin >> m >> n >> s;
    string temp;
    set<string> ss;
    int cnt;
    for (int i = 1; i <= m; i++)
    {
        cin >> temp;
        if (i == s)
        {
            if (!ss.count(temp))
            {
                ss.insert(temp);
                cout << temp << endl;
                s += n;
            }
            else
                s++;
        }
    }
    if (ss.size() == 0)
        cout << "Keep going..." << endl;
    system("pause");
    return 0;
}
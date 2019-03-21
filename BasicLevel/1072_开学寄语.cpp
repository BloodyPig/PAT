// 注意输出格式
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int sNum;
    int stu = 0, thing = 0;
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        cin >> sNum;
        s.insert(sNum);
    }
    for (int i = 0; i < n; i++)
    {
        string name;
        int k;
        bool flag = false;
        cin >> name >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> sNum;
            if (s.count(sNum) != 0)
            {
                if (!flag)
                {
                    flag = true;
                    cout << name << ":";
                }
                printf(" %04d", sNum);
                thing++;
            }
        }
        if (flag)
        {
            stu++;
            cout << endl;
        }
    }
    cout << stu << " " << thing << endl;

    system("pause");
    return 0;
}
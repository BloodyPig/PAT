#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    //分别假设i和j是狼人
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            //默认全是狼人
            vector<int> lie, a(n + 1, 1);
            a[i] = a[j] = -1;
            //k说的话和真实情况不同 表示k在说谎
            for (int k = 1; k <= n; k++)
                if (v[k] * a[abs(v[k])] < 0)
                    lie.push_back(k);
            //说谎人数等于2并且这两个说谎的人一个是好人一个是狼人
            if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    system("pause");
    return 0;
}
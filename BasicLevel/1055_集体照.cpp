#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct stu
{
    string name;
    int height;
};

//身高不同则按降序排序，相同则按字典顺序排序
int cmp(struct stu a, struct stu b) { return a.height != b.height ? a.height > b.height : a.name < b.name; }

int main()
{
    int n, k, m;
    cin >> n >> k;
    vector<stu> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].name >> v[i].height;
    sort(v.begin(), v.end(), cmp);
    int t = 0, row = k;
    while (row)
    {
        if (row == k)
            m = n - n / k * (k - 1);
        else
            m = n / k;
        vector<string> stemp(m);
        stemp[m / 2] = v[t].name;
        // 左边一列
        int j = m / 2 - 1;
        for (int i = t + 1; i < t + m; i = i + 2)
            stemp[j--] = v[i].name;
        // 右边一列
        j = m / 2 + 1;
        for (int i = t + 2; i < t + m; i = i + 2)
            stemp[j++] = v[i].name;
        // 输出当前排
        cout << stemp[0];
        for (int i = 1; i < m; i++)
            cout << " " << stemp[i];

        cout << endl;
        t = t + m;
        row--;
    }

    system("pause");
    return 0;
}
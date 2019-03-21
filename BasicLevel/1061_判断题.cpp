#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *s = new int[m];
    int *ans = new int[m];
    int *stu = new int[m];
    for (int i = 0; i < m; i++)
        cin >> s[i];
    for (int i = 0; i < m; i++)
        cin >> ans[i];
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> stu[j];
            if (stu[j] == ans[j])
                total += s[j];
        }
        cout << total << endl;
    }
    system("pause");
    return 0;
}
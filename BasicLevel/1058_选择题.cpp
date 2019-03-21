#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m, temp, k;
    scanf("%d%d", &n, &m);

    vector<int> total(m), wrong(m);
    vector<set<char>> right(m);
    char c;
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &total[i], &temp, &k);
        for (int j = 0; j < k; j++)
        {
            char c;
            scanf(" %c", &c);
            right[i].insert(c);
        }
    }
    
    system("pause");
    return 0;
}
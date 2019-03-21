#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<list<int>> v(m);
    string a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int at = atoi(a.c_str());
        int bt = atoi(b.c_str());
        v[at].push_back(bt);
    }
    cout<<v.end();

    system("pause");
    return 0;
}
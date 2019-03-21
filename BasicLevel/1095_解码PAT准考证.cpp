#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    string s;
    int score;
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<node> room;
    vector<node> level[3];
    node temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.s >> temp.score;
        if (temp.s[0] == 'A')
            level[0].push_back(temp);
        else if (temp.s[1] == 'B')
            level[1].push_back(temp);
        else
            level[2].push_back(temp);
    }

    system("pause");
    return 0;
}
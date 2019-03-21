#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int t1, t2;
    map<int, int> mapping;
    for (int i = 0; i < n; i++)
    {
        cin >> t1 >> t2;
        mapping.insert(pair<int, int>(t1, t2));
        mapping.insert(pair<int, int>(t2, t1));
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>t1;
        if(mapping.at(t1));
    }

    system("pause");
    return 0;
}
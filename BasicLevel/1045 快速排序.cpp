// 每次比较当前元素和已经有序的前面的元素

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a, b, c;
    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        a.push_back(temp);
        b.push_back(temp);
    }

    sort(a.begin(), a.end());
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == b[i] && b[i] > max)
            c.push_back(b[i]);
        max = b[i] > max ? b[i] : max;
    }

    cout << c.size() << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
        if (i != c.size() - 1)
            cout << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
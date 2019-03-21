//考虑到结果无重复 使用STL库的set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, num, sum;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        cin >> num;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        s.insert(sum);
    }
    cout << s.size() << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        if (i != s.begin())
            cout << " ";
        cout << *i;
    }

    system("pause");
    return 0;
}
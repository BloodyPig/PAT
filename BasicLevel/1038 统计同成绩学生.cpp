#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101] = {0};
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[temp]++;
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if (i != 0)
            cout << " ";
        cin >> temp;
        cout << a[temp];
    }
    system("pause");
    return 0;
}
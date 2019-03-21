//若一个数组中只有一个元素出现了一次，其他元素均出现了两次，求那一个元素
//用异或运算快速求出
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    vector<int> v;
    while (n--)
    {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 1; i < v.size(); i++)
        v[0] = v[i] ^ v[0];
    cout << v[0];
    system("pause");
    return 0;
}
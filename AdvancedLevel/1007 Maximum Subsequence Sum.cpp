//判断每一个输入数组对当前子串的贡献
//如果加上当前数字使得子串总和小于零 则抛弃之前数 开始新的子串
//如果加上当前数字大于子串总和,就继续这个子串
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int leftindex = 0, rightindex = n - 1, sum = -1, temp = 0, tempindex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        temp += v[i];
        if (temp < 0)
        {
            temp = 0;
            tempindex = i + 1;
        }
        else if (temp > sum)
        {
            sum = temp;
            leftindex = tempindex;
            rightindex = i;
        }
    }
    if (sum < 0)
        sum = 0;
    printf("%d %d %d", sum, v[leftindex], v[rightindex]);
    system("pause");
    return 0;
}
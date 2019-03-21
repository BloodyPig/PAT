/*
当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对 n=5、8、4、2 进行验证的时候，
就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这 4 个数已经在验证3的时候遇到过了，
我们称 5、8、4、2 是被 3“覆盖”的数。我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。

现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。
你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。
*/

/*
    两个新接触：
    1、使用容器作为动态数组，节省很多时间
    2、使用算法库algorithm，可以省去对基础算法的书写
    这道题考查散列的应用
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main()
{
    int k, n;
    cin >> k;
    vector<int> num(k);
    vector<bool> arr(1000);
    bool flag = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        num[i] = n;
        while (n != 1)
        {
            if (n % 2 != 0)
                n = 3 * n + 1;
            n /= 2;
            if (arr[n])
                break;
            arr[n] = true;
        }
    }
    sort(num.begin(), num.end(), cmp);
    for (int i = 0; i < k; i++)
    {
        if (!arr[num[i]])
        {
            if (flag == 1)
                cout << " ";
            cout << num[i];
            flag = 1;
        }
    }
    system("pause");
    return 0;
}

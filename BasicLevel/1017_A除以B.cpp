//对第一位进行特殊处理 考虑数字的长度为1的情况
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    int Q, B, R = 0;
    cin >> A >> B;
    int i = 0, j = 0;
    //计算第一位
    Q = (A[0] - '0') / B;
    if (Q != 0 && A.length() > 1 || A.length() == 1)
        cout << Q;
    R = (A[0] - '0') % B;
    for (i = 1; i < A.length(); i++)
    {
        Q = (R * 10 + A[i] - '0') / B;
        cout << Q;
        R = (R * 10 + A[i] - '0') % B;
    }
    cout << " " << R;
    system("pause");
    return 0;
}

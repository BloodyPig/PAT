#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    int jiaH = 0, yiH = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        if ((a + c) == b && (a + c) != d)
            yiH++;
        else if ((a + c) == d && (a + c) != b)
            jiaH++;
    }
    printf("%d %d", jiaH, yiH);

    system("pause");
    return 0;
}
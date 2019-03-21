#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a, b;
    int awin = 0, bwin = 0;
    int wa[3] = {0};
    int wb[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 'B' && b == 'C')
        {
            awin++;
            wa[0]++;
        }
        if (a == 'B' && b == 'J')
        {
            bwin++;
            wb[2]++;
        }
        if (a == 'C' && b == 'B')
        {
            bwin++;
            wb[0]++;
        }
        if (a == 'C' && b == 'J')
        {
            awin++;
            wa[1]++;
        }
        if (a == 'J' && b == 'B')
        {
            awin++;
            wa[2]++;
        }
        if (a == 'J' && b == 'C')
        {
            bwin++;
            wb[1]++;
        }
    }
    printf("%d %d %d\n", awin, n - awin - bwin, bwin);
    printf("%d %d %d\n", bwin, n - awin - bwin, awin);
    int ma = wa[0] >= wa[1] ? 0 : 1;
    ma = wa[ma] >= wa[2] ? ma : 2;
    int mb = wb[0] >= wb[1] ? 0 : 1;
    mb = wb[mb] >= wb[2] ? mb : 2;
    char s[3] = {'B', 'C', 'J'};
    printf("%c %c", s[ma], s[mb]);
    system("pause");
    return 0;
}

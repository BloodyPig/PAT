#include <iostream>
using namespace std;

int main()
{
    char c;
    int Pnum = 0, PAnum = 0, PATnum = 0;
    while (1)
    {
        c = getchar();
        if (c == '\n')
            break;
        if (c == 'P')
            Pnum++;
        if (c == 'A')
            PAnum = (PAnum + Pnum) % 1000000007;
        if (c == 'T')
            PATnum = (PAnum + PATnum) % 1000000007;
    }
    cout << PATnum;
    system("pause");
    return 0;
}
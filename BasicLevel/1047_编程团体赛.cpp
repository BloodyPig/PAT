#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[1001] = {0};
    int win = 0, a, b, c;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d %d", &a, &b, &c);
        s[a] += c;
        win = s[win] > s[a] ? win : a;
    }
    printf("%d %d", win, s[win]);
    system("pause");
    return 0;
}
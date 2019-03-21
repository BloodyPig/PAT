#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int a[10] = {0};
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        a[(n[i] - '0') % 10]++;
    }
    for (int i = 0; i < 10; i++)
        if (a[i] != 0)
            printf("%d:%d\n", i, a[i]);
    system("pause");
    return 0;
}

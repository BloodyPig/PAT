#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float r = 0.0, m;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        m = sqrt((float)a * a + (float)b * b);
        r = r > m ? r : m;
    }
    printf("%.2f", r);
    system("pause");
    return 0;
}
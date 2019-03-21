#include <iostream>
using namespace std;

int main()
{
    int N, D;
    float e;
    cin >> N >> e >> D;
    int day, low_day;
    float temp;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < N; i++)
    {
        low_day = 0;
        cin >> day;
        for (int j = 0; j < day; j++)
        {
            cin >> temp;
            if (temp < e)
                low_day++;
        }
        if (low_day > day / 2)
        {
            cnt1++;
            if (day > D)
            {
                cnt2++;
                cnt1--;
            }
        }
    }
    printf("%.1f%% %.1f%%", cnt1 * 100 / (float)N, cnt2 * 100 / (float)N);
    system("pause");
    return 0;
}
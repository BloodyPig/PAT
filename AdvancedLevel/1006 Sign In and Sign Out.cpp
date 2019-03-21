//循环中比较就行了
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string id_num;
    int in_h;
    int in_m;
    int in_s;
    int out_h;
    int out_m;
    int out_s;
    int min = INT_MAX, max = INT_MIN;
    string unlocked, locked;

    for (int i = 0; i < n; i++)
    {
        cin >> id_num;
        scanf("%d:%d:%d %d:%d:%d", &in_h, &in_m, &in_s, &out_h, &out_m, &out_s);
        int temp_in = in_h * 3600 + in_m * 60 + in_s;
        int temp_out = out_h * 3600 + out_m * 60 + out_s;
        if (temp_in < min)
        {
            min = temp_in;
            unlocked = id_num;
        }
        if (temp_out > max)
        {
            max = temp_out;
            locked = id_num;
        }
    }
    cout << unlocked << " " << locked;
    system("pause");
    return 0;
}
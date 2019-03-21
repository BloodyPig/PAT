#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    int sum = 0;
    int counter1 = 0, counter2 = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            s[i] = toupper(s[i]);
            sum += s[i] - 'A' + 1;
        }
    }
    while (sum > 0)
    {
        if (sum % 2 == 0)
            counter1++;
        else
            counter2++;
        sum /= 2;
    }
    cout << counter1 << " " << counter2;
    system("pause");
    return 0;
}
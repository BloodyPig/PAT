#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    char DA, DB;
    int a = 0, b = 0;
    cin >> A >> DA >> B >> DB;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] == DA)
        {
            a = a * 10 + DA - '0';
        }
    }
    for (int i = 0; i < B.length(); i++)
    {
        if (B[i] == DB)
        {
            b = b * 10 + DB - '0';
        }
    }
    printf("%d", a + b);
    system("pause");
    return 0;
}

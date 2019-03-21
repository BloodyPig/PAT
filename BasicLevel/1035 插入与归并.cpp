#include <iostream>
#include <algorithm>
using namespace std;

//插入排序 将前面n个元素先排序
void insort(int a[], int b[], int n)
{
    bool key = false;
    for (int i = 2; i <= n; i++)
    {
        sort(a, a + i);
        if (key)
        {
            cout << "Insertion Sort" << endl;
            cout << a[0];
            for (int j = 1; j < n; j++)
                cout << " " << a[j];
            return;
        }
        if (equal(a, a + n, b))
            key = true;
    }
}

void mesort(int a[], int b[], int n)
{
    int key = false;
    for (int i = 2;; i *= 2)
    {
        for (int j = 0; j < n; j += i)
        {
            int bound = j + i < n ? j + i : n;
            sort(a + j, a + bound);
        }
        if (key)
        {
            cout << "Merge Sort" << endl;
            cout << a[0];
            for (int j = 1; j < n; j++)
                cout << " " << a[j];
            return;
        }
        if (equal(a, a + n, b))
            key = true;
        if (i > n)
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];

    insort(a, b, n);
    mesort(c, b, n);

    system("pause");
    return 0;
}
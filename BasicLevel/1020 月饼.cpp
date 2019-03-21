#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    float store;
    float total_price;
    float price;
};

int cmp(Node a, Node b)
{
    return a.price > b.price;
}

int main()
{
    int N, D;
    cin >> N >> D;
    vector<Node> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].store;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].total_price;
        v[i].price = v[i].total_price / (float)v[i].store;
    }
    sort(v.begin(), v.end(), cmp);
    int remain = D;
    float total = 0;
    for (int i = 0; i < N; i++)
    {
        if (v[i].store > remain)
        {
            total += v[i].price * remain;
            break;
        }
        else
        {
            total += v[i].total_price;
            remain -= v[i].store;
        }
    }
    printf("%.2f", total);
    system("pause");
    return 0;
}
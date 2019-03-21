#include <iostream>
using namespace std;

struct node
{
    int id;
    int x;
    int y;
};

int main()
{
    int n;
    cin >> n;
    node temp;
    node winner, loser;
    winner.x = -101;
    winner.y = -101;
    loser.x = 0;
    loser.y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.id >> temp.x >> temp.y;
        if ((temp.x * temp.x + temp.y * temp.y) <= (winner.x * winner.x + winner.y * winner.y))
            winner = temp;

        if ((temp.x * temp.x + temp.y * temp.y) >= (loser.x * loser.x + loser.y * loser.y))
            loser = temp;
    }
    printf("%04d %04d", winner.id, loser.id);
    system("pause");
    return 0;
}
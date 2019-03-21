/**
 * 
 * 读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
 * */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, maxName, minName;
    string ID, maxID, minID;
    int score, maxScore, minScore;
    int n;
    maxScore = -1;
    minScore = 101;
    cin >> n;
    while (n != 0)
    {
        cin >> name >> ID >> score;
        if (minScore >= score)
        {
            minName = name;
            minID = ID;
            minScore = score;
        }
        if (maxScore <= score)
        {
            maxScore = score;
            maxID = ID;
            maxName = name;
        }
        n--;
    }
    cout << maxName << " " << maxID << endl
         << minName << " " << minID << endl;
    system("pause");
    return 0;
}

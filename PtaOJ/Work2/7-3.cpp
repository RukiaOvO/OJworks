#include <bits/stdc++.h>
using namespace std;

struct stu_list
{
    long long int id;
    string name;
    int score1 = 0;
    int score2 = 0;
    int total_score = 0;
};

int main(void)
{
    int nums;
    cin >> nums;
    getchar();

    struct stu_list list[nums];
    for(int i = 0; i < nums; i++)
    {
        cin >> list[i].id >> list[i].name >> list[i].score1 >> list[i].score2;

        int temp = ((list[i].score1 - list[i].score2) >= 0)?(list[i].score1):(list[i].score2);
        list[i].total_score = temp;
    }

    int j;
    int score_save;
    long long int id_save;
    string name_save;

    for(int i = 1; i < nums; i++)
    {
        score_save = list[i].total_score;
        id_save = list[i].id;
        name_save = list[i].name;

        for(j = i - 1; 0 <= j && list[j].id > id_save; j--)
        {
            list[j + 1].total_score = list[j].total_score;
            list[j + 1].id = list[j].id;
            list[j + 1].name = list[j].name;
        }

        list[j + 1].total_score = score_save;
        list[j + 1].id = id_save;
        list[j + 1].name = name_save;
    }

    for(int i = 0; i < nums; i++)
    {
        cout << list[i].id << " " << list[i].name.c_str() << " " << list[i].total_score << endl;
    }
}
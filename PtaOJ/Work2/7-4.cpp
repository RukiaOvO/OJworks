#include <bits/stdc++.h>
using namespace std;

struct team
{
    char name1[21];
    char name2[21];
    char name3[21];
    char name4[21];

    int rank[11];
};

int main(void)
{
    int nums;
    cin >> nums;
    getchar();

    int total_score[nums] = {0};
    struct team team_list[nums];

    for(int i = 0; i < nums; i++)
    {
        scanf("%s %s %s %s", &team_list[i].name1, &team_list[i].name2, &team_list[i].name3, &team_list[i].name4);
    
        for(int j = 0; j < nums; j++)
        {
            scanf("%d", &team_list[i].rank[j]);
            
            int temp = team_list[i].rank[j] - 1;
            total_score[temp] += nums-j;
        }
    }
    getchar();

    int count = 1;
    for(int i = 0; i < nums; i++)
    {
        int max = 0;
        for(int j = 0; j < nums; j++)
        {
            if(total_score[max] < total_score[j] && total_score[j] != -1) max = j;
        }

        printf("%d %s %s %s %s\n", count++, &team_list[max].name1, &team_list[max].name2, &team_list[max].name3, &team_list[max].name4);
        total_score[max] = -1;
    }
}
#include <bits/stdc++.h>
using namespace std;

struct stu
{
    long long int id;
    char name[21];
    int score;
    int test_number = 0;
};

int main(void)
{
    int nums;
    cin >> nums;
    getchar();

    int avg = 0;
    struct stu stulist[nums];
    for(int i = 0; i < nums; i++)
    {
        scanf("%lld %s %d", &stulist[i].id, &stulist[i].name, &stulist[i].score);
        avg += stulist[i].score;
    }
    
    avg /= nums;
    printf("%d\n", avg);

    int test_count = 0;
    for(int i = 0; i < nums; i++)
    {
        if(stulist[i].score < avg)
        {
            if((avg-10) <= stulist[i].score && stulist[i].score < avg) stulist[i].test_number = 3;
            else if(0 <= stulist[i].score && stulist[i].score < (avg-10)) stulist[i].test_number = 4;
            
            test_count++;
        }
    }
    printf("%d\n", test_count);

    for(int i = 0; i < nums; i++)
    {
        if(stulist[i].test_number != 0) printf("%lld %s %d %d\n", stulist[i].id, stulist[i].name, stulist[i].score, stulist[i].test_number);
    }
}
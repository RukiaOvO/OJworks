#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char list[3][20];
    char count1 = 0;
    char count2 = 0;
    char count3 = 0;

    for(int i = 0; i <= 2; i++)
    {
        scanf("%s", &list[i]);
    }

    for(int i = 0; list[0][i] != '\0'; i++)
    {
        count1 += list[0][i];
    }

    for(int i = 0; list[1][i] != '\0'; i++)
    {
        count2 += list[1][i];
    }

    for(int i = 0; list[2][i] != '\0'; i++)
    {
        count3 += list[2][i];
    }

    printf("The largest string is:\n");
    if(count1 > count2 && count1 > count3)
    {
        for(int i = 0; list[0][i] != '\0'; i++)
        {
            printf("%c", list[0][i]);
        }
    }

    if(count2 > count3 && count2 > count1)
    {
        for(int i = 0; list[1][i] != '\0'; i++)
        {
            printf("%c", list[1][i]);
        }
    }

    if(count3 > count1 && count3 > count2)
    {
        for(int i = 0; list[2][i] != '\0'; i++)
        {
            printf("%c", list[2][i]);
        }
    }
}
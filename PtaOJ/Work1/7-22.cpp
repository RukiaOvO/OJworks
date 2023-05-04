#include <bits/stdc++.h>
using namespace std;

void strmcpy(char* s, char* t, int m)
{
    int check = 0;
    for(int i = m-1; t[i] != '\0'; i++)
    {
        s[check++] = t[i];
    }

    s[check] = '\0';
    puts(s);
}

int main(void)
{
    char list[100], newone[100];

    int times;
    scanf("%d", &times);
    getchar();

    for(int j = 0; j < times; j++)
    {
        scanf("%[^\n]", &list);
        getchar();
        int move;
        scanf("%d", &move);
        getchar();

        if(strlen(list) < move)
        {
            printf("error input");
        }

        else strmcpy(newone, list, move);
    }
}
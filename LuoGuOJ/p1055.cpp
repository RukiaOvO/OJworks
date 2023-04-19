#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char list[13];
    scanf("%s", &list);

    int sum = 0;
    int check = 0;
    for(int i = 1; i <= 9; i++)
    {
        if(check == 1 || check == 5) check++;
        sum += (list[check] - '0') * i;
        check++;
    }

    if(sum%11 == list[12] - '0' && list[12] != 'X') printf("Right");
    else if(sum%11 == 10 && list[12] == 'X') printf("Right");
    else
    {
        if(sum%11 == 10) list[12] = 'X';
        else list[12] = (sum%11) + '0';

        for(int i = 0; i < 13; i++)
        {
            printf("%c", list[i]);
        }
    }
}
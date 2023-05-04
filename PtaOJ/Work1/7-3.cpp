#include <bits/stdc++.h>
using namespace std;

int percent[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char code_list[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main(void)
{
    int nums;
    scanf("%d", &nums);

    char list[nums][19];
    int check[nums] = {0};
    for(int i = 0; i < nums; i++)
    {
        scanf("%s", list[i]);
        list[i][18] = '\0';

        int sum = 0;
        for(int j = 0; j < 17; j++)
        {
            if(list[i][j] < 48 || list[i][j] > 57)
            {
                check[i] = 1;
                break;
            }
        }
        for(int j = 0; j < 17; j++)
        {
            sum += (list[i][j] - '0') * percent[j];
        }

        int n_check = sum%11;
        if(code_list[n_check] != list[i][17]) check[i] = 1;
    }

    int p_check = 0;
    for(int i = 0; i < nums; i++)
    {
        if(check[i] != 0)
        {
            puts(list[i]);
            p_check++;
        }
    }

    if(p_check == 0) printf("All passed");
}
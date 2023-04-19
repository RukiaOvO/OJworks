#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int max;
    scanf("%d", &max);

    int sum = 0;
    int count = 0;
    for(int i = 2; sum < max; i++)
    {
        int check = 0;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0 && j != 1) check = 1;
        }

        if(check == 0)
        {
            if(sum + i > max) break;
            else
            {
                count++;
                sum += i;
                printf("%d\n", i);
            }
        }
    }

    printf("%d\n", count);
}
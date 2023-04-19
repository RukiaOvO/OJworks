#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int days;
    scanf("%d", &days);
    
    int day_all = 0;
    int coins = 0;
    int i;

    for(i = 1; day_all < days; i++)//即便不满足循环的条件，也会执行i自增的行为
    {
        coins += i*i;
        day_all += i;
    }

    coins -= (day_all - days)*(--i);

    printf("%d", coins);
}
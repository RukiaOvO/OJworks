#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int days;
    scanf("%d", &days);
    
    int day_all = 0;
    int coins = 0;
    int i;

    for(i = 1; day_all < days; i++)//���㲻����ѭ����������Ҳ��ִ��i��������Ϊ
    {
        coins += i*i;
        day_all += i;
    }

    coins -= (day_all - days)*(--i);

    printf("%d", coins);
}
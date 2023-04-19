// Time Limit Exceeded 数据量大，需排除部分数
#include <bits/stdc++.h>
using namespace std;

int check(long int n)
{
    int list[9];
    int count = 0;

    for(long int i = 1; i*i <= n; i++)
    {
        if(n%i == 0 && i != 1) return 0;
    }

    while(n)
    {
        list[count++] = n%10;
        n /= 10;
    }

    for(int i = 0; i <= count-1; i++)
    {
        if(list[i] != list[count-1-i]) return 0;
    }

    return 1;
}

int main(void)
{
    long int min;
    long int max;
    scanf("%ld %ld", &min, &max);

    for(long int i = min; i <= max; i++)
    {
        if(check(i) == 1) printf("%ld\n", i);
    }
}
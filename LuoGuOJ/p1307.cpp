#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int num;
    scanf("%ld", &num);

    if(num < 0)
    {
        printf("-");
        num *= -1;
    }
    else if(num == 0)
    {
        printf("0");
        return 0;
    }

    while(num%10 == 0) num /= 10;

    while(num)
    {
        printf("%d", num%10);
        num /= 10;
    }

    return 0;
}
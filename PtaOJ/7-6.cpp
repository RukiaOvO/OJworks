#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);

    int sum = 0;
    for(int i = 1; ; i++)
    {
        int temp = num;
        sum = 0;
        while(num > 0)
        {
            sum += (num%10);
            num /= 10;
        }
        num = sum*3+1;

        printf("%d:%d\n", i, num);
        if(num == temp) break;
    }
}
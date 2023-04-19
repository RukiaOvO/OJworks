#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num, check;
    while(~scanf("%d %d", &num, &check))
    {
        if(num == 0) break;

        int count = 0;
        for(int i = 1; i <= num; i++)
        {
            int n = i;

            while(n)
            {
                if(n%10 == check) count++;
                n /= 10;
            }
        }

        printf("%d\n", count);
    }
}
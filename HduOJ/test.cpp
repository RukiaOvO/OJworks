#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    while(~scanf("%d", &num))
    {
        if(num == 0) break;

        double sum = 0;
        for(int i = 1; i <= num; i++)
        {
            if(i%2 != 0)
            {
                sum += (double)i/(2 * i - 1);
            }
            else
            {
                sum -= (double)i/(2 * i - 1);
            }
        }

        printf("%.3lf\n", sum);
    }
}
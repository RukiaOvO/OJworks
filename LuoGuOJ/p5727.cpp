#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int nums;
    while(~scanf("%d", &nums))
    {
        if(nums <= 0) break;

        int templist[1000];
        int count = 0;

        while(nums != 1)
        {
            templist[count++] = nums;

            if(nums%2 == 0) nums /= 2;
            else nums = nums*3 + 1;
        }

        templist[count] = 1;

        for(int i = count; i >= 0; i--)
        {
            printf("%d ", templist[i]);
        }
    }
}
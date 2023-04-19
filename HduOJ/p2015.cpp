#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int nums, gap;
    while(~scanf("%d %d", &nums, &gap))
    {
        if(nums <= 0 | nums > 100) break;
        
        int list[101];
        int result[101];

        for(int i = 1; i <= nums; i++)
        {
            list[i] = 2*i;
        }

        int count = 0;
        int sum = 0;
        int k = 0;
        for(int i = 1; i <= nums; i++)
        {
            count++;
            sum += list[i];
            if(count == gap)
            {
                result[k++] = sum/gap;
                sum = 0;
                count = 0;
            }
        }

        if(nums%gap != 0) result[k++] = sum/(nums%gap);

        for(int i = 0; i < k - 1; i++)
        {
            printf("%d ", result[i]);
        }
        printf("%d\n", result[k - 1]);
        
    }
}
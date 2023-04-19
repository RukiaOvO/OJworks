#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int needs;
    scanf("%d", &needs);

    int nums[3];
    int prices[3];
    int price_all[3];

    for(int i = 0; i <= 2; i++)
    {
        scanf("%d %d", &nums[i], &prices[i]);
        
        if(needs > nums[i])
        {
            if(needs%nums[i] == 0) price_all[i] = prices[i] * (needs/nums[i]);
            else price_all[i] = prices[i] * (needs/nums[i] + 1);
        }
        else price_all[i] = prices[i];
    }

    if(price_all[0] <= price_all[1] && price_all[0] <= price_all[2]) printf("%d", price_all[0]);
    if(price_all[1] <= price_all[0] && price_all[1] <= price_all[2]) printf("%d", price_all[1]);
    if(price_all[2] <= price_all[1] && price_all[2] <= price_all[0]) printf("%d", price_all[2]);

}
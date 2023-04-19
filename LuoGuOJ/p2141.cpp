#include <bits/stdc++.h>
using namespace std;

int sort(const void* _a, const void* _b)
{
    int a = *(int*)_a;
    int b = *(int*)_b;
    return a-b;
}

int main(void)
{
    int nums;
    while(~scanf("%d", &nums))
    {
        if(nums <= 0) break;
        
        int numlist[nums];
        int check[nums] = {0};

        for(int i = 0; i < nums; i++)
        {
            scanf("%d", &numlist[i]);
        }

        for(int i = 0; i < nums; i++)
        {
            for(int j = i+1; j < nums; j++)
            {
                for(int k = 0; k < nums; k++)
                {
                    if(numlist[i] + numlist[j] == numlist[k]) check[k]++;
                }
            }
        }

        int times = 0;

        for(int i = 0; i < nums; i++)
        {
            if(check[i] != 0) times++;
        }

        printf("%d\n", times);
    }
}
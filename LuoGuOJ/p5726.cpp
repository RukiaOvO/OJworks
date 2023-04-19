#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int sort(const void * _a, const void * _b)
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

        int list[nums];
        for(int i = 0; i < nums; i++)
        {
            scanf("%d", &list[i]);
        }

        qsort(list, nums, 4, sort);
        double sum = 0;
        for(int i = 1; i < nums-1; i++)
        {
            sum += list[i];
        }

        printf("%.2lf\n", sum/(nums-2));
    }
}
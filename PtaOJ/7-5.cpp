#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int sort(const void* _a, const void* _b)
{
    int a = *(int*)_a;
    int b = *(int*)_b;
    return a-b;
}

int main(void)
{
    int money;
    int nums;
    scanf("%d %d", &money, &nums);

    char name[nums][21];
    int price[nums];
    int temp[nums];
    int ptr[nums];
    for(int i = 0; i < nums; i++)
    {
        scanf("%s %d", &name[i], &price[i]);
        temp[i] = price[i];
    }

    qsort(temp, nums, 4, sort);
    int sum = 0;
    int check = 0;
    for(int i = nums-1; i >= 0; i--)
    {
        if(sum + temp[i] < money)
        {
            sum += temp[i];
            ptr[check++] = temp[i];
        }

        else if(sum + temp[i] == money)
        {
            sum += temp[i];
            ptr[check++] = temp[i];
            break;
        }

        else continue;
    }

    int p_out = 0;
    for(int i = 0; i <= check-1; i++)
    {
        for(int j = 0; j < nums; j++)
        {
            if(price[j] == ptr[i])
            {
                puts(name[j]);
                p_out = 1;
            }
        }
    }

    if(p_out == 0) printf("chitu");
}
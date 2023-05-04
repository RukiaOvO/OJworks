#include <bits/stdc++.h>
using namespace std;

void max_min(int * l, int n)
{
    int save, j;
    
    for(int i = 1; i < n; i++)
    {
        save = l[i];
        for(j = i - 1; 0 <= j && l[j] > save; j--)
        {
            l[j + 1] = l[j];
        }
        l[j + 1] = save;
    }

    printf("max = %d\n", l[n-1]);
    printf("min = %d", l[0]);
}

int main(void)
{
    int nums;
    cin >> nums;

    int list[nums];
    for(int i = 0; i < nums; i++)
    {
        scanf("%d", &list[i]);
    }

    max_min(list, nums);
}
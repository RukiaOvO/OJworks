#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int height[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &height[i]);
    }

    int caught;
    scanf("%d", &caught);

    int check = 0;
    for(int i = 0; i <= 9; i++)
    {
        if(height[i] <= caught+30) check++;
    }

    printf("%d", check);
}
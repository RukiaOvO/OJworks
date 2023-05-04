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
    int list[4][5];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &list[i][j]);
        }
    }

    for(int i = 0; i < 4; i++)
    {
        qsort(list[i], 5, 4, sort);

        printf("   %d   %d   %d   %d   %d\n", list[i][0], list[i][1], list[i][2], list[i][3], list[i][4]);
    }
}
#include <bits/stdc++.h>
using namespace std;

void sort(int * a, int n)
{
    int save, j;

    for(int i = 1; i < n; i++)
    {
        save = a[i];
        for(j = i - 1; 0 <= j && a[j] > save; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = save;
    }

    printf("After sorted: ");
    for(int i = 0; i < n; i++)
    {
        if(i == n-1) printf("%d\n", a[i]);
        else printf("%d ", a[i]);
    }   
}


int main(void)
{
    int repeat;
    cin >> repeat;

    for(int m = 1; m <= repeat; m++)
    {
        int nums;
        cin >> nums;
        
        int list[nums];
        for(int check = 0; check < nums; check++)
        {
            scanf("%d", &list[check]);
        }

        sort(list, nums);
    }
}
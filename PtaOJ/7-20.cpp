#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *p, int c)
{
    int save, j;
    
    for(int i = 1; i < c; i++)
    {
        save = p[i];
        for(j = i - 1; 0 <= j && p[j] > save; j--)
        {
            p[j + 1] = p[j];
        }
        p[j + 1] = save;
    }
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

    bubbleSort(list, nums);

    for(int i = 0; i < nums; i++)
    {
        cout << list[i] << " ";
    }
}
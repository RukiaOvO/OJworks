#include <iostream>
#include <stdlib.h>
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
        int * numslist = new int[nums];
        
        for(int i = 0; i <= nums - 1; i++)
        {
            scanf("%d", &numslist[i]);
        }
        
        qsort(numslist, nums, 4, sort);

        double sum = 0;

        for (int i = 1; i <= nums - 2; i++)
        {
            sum += numslist[i];
        }
        
        printf("%.2lf\n", (sum/(nums - 2)));

        delete [] numslist;
    }
}
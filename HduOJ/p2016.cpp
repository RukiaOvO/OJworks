#include <iostream>
using namespace std;

int sort(const void * _a, const void * _b)
{
    int a = *(int*)_a;
    int b = *(int*)_b;
    return a - b;
}

int main(void)
{
    int num;
    while(~scanf("%d", &num))
    {
        if(num == 0) break;
        
        int * numlist = new int[num];
        int * numcopy = new int[num];
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &numlist[i]);
            numcopy[i] = numlist[i];
        }

        qsort(numcopy, num, 4, sort);

        for(int i = 0; i < num; i++)
        {
            if(numlist[i] == numcopy[0]) swap(numlist[0], numlist[i]);
        }

        for(int i = 0; i < num; i++)
        {
            if(i == num - 1) printf("%d\n", numlist[i]);
            else printf("%d ", numlist[i]);
        }

        delete [] numlist;
        delete [] numcopy;
    }
}
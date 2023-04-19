#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int num;
    while(~scanf("%d", &num))
    {
        if(num <= 0) break;
        
        int * list = new int[num];
        
        for(int i = 0; i < num; i++)
        {
            scanf("%d", &list[i]);
        }

        for(int i = 0; i < num - 1; i++)
        {
            for(int j = i + 1; j < num; j++)
            {
                if((abs(list[i])) < (abs(list[j])))
                {
                    swap(list[i], list[j]);
                }
            }
        }

        for(int i = 0; i < num - 1; i++)
        {
            printf("%d ", list[i]);
        }
        printf("%d\n", list[num-1]);

        delete [] list;
    }
}
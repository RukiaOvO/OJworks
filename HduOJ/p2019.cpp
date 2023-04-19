#include <iostream>
using namespace std;

int main(void)
{
    int count, num;
    while(~scanf("%d %d", &count, &num))
    {
        if(count == 0 && num == 0) break;
        
        int * list = new int[count];
        int * newone = new int[count+1];

        for(int i = 0; i < count; i++)
        {
            scanf("%d", &list[i]);
        }

        for(int j = 0; j < count; j++)
        {
            if(list[j] <= num)
            {
                newone[j] = list[j];
                if(j == count - 1)
                {
                    newone[count] = num;
                }
            }

            else
            {
                newone[j] = num;
                for(int k = j+1; k < count+1; k++)
                {
                    newone[k] = list[k-1];
                }
                break;
            }
        }

        for(int i = 0; i < count+1; i++)
        {
            if(i == count) printf("%d\n", newone[i]);
            else printf("%d ", newone[i]);
        }

        delete [] list;
        delete [] newone;
    }
}
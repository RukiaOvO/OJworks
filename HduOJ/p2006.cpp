#include <iostream>
using namespace std;

int main(void)
{
    int num;
    while(~scanf("%d", &num))
    {
        int * list = new int[num];
        int sum = 1;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &list[i]);
            if (list[i]%2 != 0) sum *= list[i];
        }
        
        printf("%d\n", sum);
        
        delete list;
    }
}
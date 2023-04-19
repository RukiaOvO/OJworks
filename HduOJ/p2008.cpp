#include <iostream>
using namespace std;

int main(void)
{
    int check;
    while(~scanf("%d", &check))
    {
        if (check <= 0) break;
        double * list = new double[check];
        int a = 0;
        int b = 0;
        int c = 0;

        for(int i = 0; i < check; i++)
        {
            scanf("%lf", &list[i]);
            if (list[i] < 0) a++;
            else if (list[i] == 0) b++;
            else c++;
        }

        printf("%d %d %d\n", a, b, c);
        
        delete [] list;
    }
}
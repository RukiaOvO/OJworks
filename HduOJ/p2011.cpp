#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int time;
    while(~scanf("%d", &time))
    {
        for(int i = 1; i <= time; i++)
        {
            int num;
            scanf("%d", &num);
            double sum = 0;

            for(int j = 1; j <= num; j++)
            {
                sum += pow(-1, j-1)/j;
            }
            printf("%.2lf\n", sum);
        }
    }
}
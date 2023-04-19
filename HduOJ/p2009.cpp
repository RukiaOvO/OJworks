#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int fi, num;
    while (~scanf("%d %d", &fi, &num))
    {
        double sum = fi;
        double check = fi;
        for (int i = 1; i < num; i++)
        {
            check = sqrt(check);
            sum += check;
        }
        printf("%.2lf\n", sum);
    }
}
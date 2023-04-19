#include <iostream>
using namespace std;

int main(void)
{
    double num;
    while (~scanf("%lf", &num))
    {
        if (num < 0) num = -num;
        printf("%.2lf\n", num);
    }
}
#include <iostream>
#include <cmath>
#define PI 3.1415927
using namespace std;

int main(void)
{
    double num;
    while (~scanf("%lf", &num))
    {
        printf("%.3lf\n", (4*PI*num*num*num/3));
    }
}
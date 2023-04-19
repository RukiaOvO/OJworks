#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,i,l;
    while(~scanf("%f %f %f %f",&a,&b,&c,&d))
    {
    i=(c-a)*(c-a)+(d-b)*(d-b);
    l=sqrt(i);
    printf("%.2f\n",l);
    }
    return 0;
}

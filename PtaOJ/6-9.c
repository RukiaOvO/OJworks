#include <stdio.h> 
void fun (long s, long *t);
int main()
{ long s, t;
 scanf("%ld", &s);
 fun(s, &t);
 printf("The result is: %ld\n", t);
 return 0;
}

#include <math.h>
void fun(long s, long *t)
{
    int temp[100];
    int count = 0;
    while(s != 0)
    {
        if((s%10)%2 == 0) temp[count++] = (s%10);

        s /= 10;
    }

    int num = 0;
    for(int i = 0; i < count; i++)
    {
        num += temp[i]*pow(10, (i+1));
    }

    t[0] = num/10;
}

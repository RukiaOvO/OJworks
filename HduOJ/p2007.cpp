#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    while(~scanf("%d %d", &a, &b))
    {
        if(a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        
        int sum1 = 0;
        int sum2 = 0;
        for (int i = a; i <= b; i++)
        {
            if(i % 2 != 0) sum1 += i*i*i;
            else sum2 += i*i; 
         }
        printf("%d %d\n", sum2, sum1);
    }
}
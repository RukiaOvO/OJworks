#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    while(~scanf("%d %d", &num1, &num2))
    {
        if(num1 < 100 | num1 >= 1000) break;
        else if(num2 < 100 | num2 >= 1000) break;

        else
        {
            if(num1 > num2) swap(num1, num2);
            int check = 0;

            for(int i = num1; i <= num2; i++)
            {
                int a, b, c;
                a = i/100;
                b = (i - 100*a)/10;
                c = (i - 100*a - 10*b);

                if (a*a*a + b*b*b + c*c*c == i)
                {
                    if(check > 0) printf(" ");
                    printf("%d", i);
                    check++;
                }
            }

            if(check == 0) printf("no");
            printf("\n");

        }
    }
}
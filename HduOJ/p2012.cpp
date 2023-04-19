#include <iostream>
using namespace std;

#define change(n) n*n+n+41

int main(void)
{
    int x, y;
    while(~scanf("%d %d", &x, &y))
    {
        if(x == 0 && y == 0) break;
        int check = 0;

        for(int i = x; i <= y; i++)
        {
            int num = change(i);

            for(int j = 1; j*j <= num; j++)
            {
                if(num%j == 0 && j != 1) check++;
            }
        }

        if(check == 0) printf("OK\n");
        else printf("Sorry\n");
    }
}
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(void)
{
    int times;
    scanf("%d", &times);
    
    int check = 1;
    int max = 0;
    int min = 0;
    while(check <= times)
    {
        int num;
        scanf("%d", &num);

        if(num%2 == 0)
        {
            max = floor(num/2);
            min = (num%4)/2 + (num - num%4)/4;
        }
        printf("%d %d\n", min, max);

        max = 0;
        min = 0;
        check++;
    }
}
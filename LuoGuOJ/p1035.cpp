#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);

    int count = 1;
    double sum = 0;

    while(sum <= num)
    {
        double temp = count;
        sum += 1/temp;
        count++;
    }

    printf("%d\n", count-1);
}
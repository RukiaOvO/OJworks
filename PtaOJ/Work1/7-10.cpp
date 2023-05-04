#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);

    int numlist[100];
    int count = 0;

    for(int i = 2; 2*i <= num; i++)
    {
        if(num%i == 0) numlist[count++] = i;
    }

    int sum = 1;
    for(int i = 0; i < count; i++)
    {
        sum *= numlist[i];
    }

    printf("%d", sum);
}
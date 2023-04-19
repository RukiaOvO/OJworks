#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int count = 0;
    long int numlist[100];
    for(; ; )
    {
        scanf("%ld", &numlist[count++]);
        if(numlist[count-1] == 0) break;
    }

    for(int i = count - 2; i >= 0; i--)
    {
        printf("%d ", numlist[i]);
    }
}
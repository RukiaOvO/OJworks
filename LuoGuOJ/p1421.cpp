#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    while(~scanf("%d %d", &a, &b))
    {
        if(a <= 0 || b <= 0) break;

        int m = 10*a + b;
        printf("%d\n", m/19);

    }
}
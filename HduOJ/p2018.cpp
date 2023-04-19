#include <iostream>
using namespace std;

int count(int n)
{
    if(n <= 4) return n;
    else return count(n-3)+count(n-1);
}


int main(void)
{
    int year;
    while(~scanf("%d", &year))
    {
        if(year == 0) break;
        printf("%d\n", count(year));
    }
}
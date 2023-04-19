#include <iostream>
using namespace std;

int main(void)
{
    int days;
    while(~scanf("%d", &days))
    {
        if(days <= 1 | days >= 30) break;

        int nums = 1;
        for(int i = 1; i < days; i++)
        {
            nums = (nums + 1) * 2;
        }

        printf("%d\n", nums);
    }
}
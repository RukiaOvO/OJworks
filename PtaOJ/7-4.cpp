#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int nums;
    scanf("%d", &nums);

    long long int id[nums];
    int c_number[nums];
    int number[nums];

    for(int i = 0; i < nums; i++)
    {
        scanf("%lld", &id[i]);
        scanf("%d", &c_number[i]);
        scanf("%d", &number[i]);
    }

    int checks;
    scanf("%d", &checks);
    int check_number[checks];
    for(int i = 0; i < checks; i++)
    {
        scanf("%d", &check_number[i]);

        for(int j = 0; j < nums; j++)
        {
            if(c_number[j] == check_number[i])
            {
                printf("%lld %d\n", id[j], number[j]);
            }
        }
    }
}
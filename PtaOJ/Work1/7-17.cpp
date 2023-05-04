#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int nums;
    int number;
    scanf("%d", &nums);
    scanf("%d", &number);
    
    int list[nums];
    for(int i = 1; i <= nums; i++)
    {
        list[i] = i;
    }
    
    int check = 0;
    int count = 1;
    for(int c = nums; c > 1;)
    {
        for(int i = 1; i <= nums; i++)
        {
            if(list[i] == 0) continue;
            
            check++;
            if(check == number)
            {
                printf("No%d: %d\n", count++, list[i]);
                list[i] = 0;
                check = 0;
                c--;
            }
        }
    }

    for(int i = 1; i <= nums; i++)
    {
        if(list[i] != 0) printf("Last No is: %d\n", list[i]);
    }

}

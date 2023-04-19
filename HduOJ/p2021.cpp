#include <iostream>
using namespace std;

int count_all(int s)
{
    int list[6] = {100, 50, 10, 5, 2, 1};

    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        count += s/list[i];
        s %= list[i];
    }
    
    return count;
}

int main(void)
{
    int nums;
    while(~scanf("%d", &nums))
    {
        if(nums == 0) break;
        
        int * salary = new int[nums];
        int nums_all = 0;
        for(int i = 0; i < nums; i++)
        {
            scanf("%d", &salary[i]);
            nums_all += count_all(salary[i]);
        }
        
        printf("%d\n", nums_all);
        
        delete [] salary;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int nums;
    scanf("%d", &nums);

    int count;
    int sum = 0;
    for(count = 1; sum < nums; count++) sum += count;
    sum -= --count;
    
    if(count%2 != 0) printf("%d/%d", count+1-nums+sum, nums-sum);
    else printf("%d/%d", nums-sum, count+1-nums+sum);
}
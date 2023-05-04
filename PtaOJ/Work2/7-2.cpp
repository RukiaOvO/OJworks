#include <bits/stdc++.h>
using namespace std;

struct num
{
    int upper = 0;
    int lower = 1;
};

int check(int a, int b)
{
    int temp;
    if(a < b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    while(a%b != 0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }

    return b;
}

int main(void)
{
    int nums;
    cin >> nums;
    getchar();

    struct num list[nums];

    for(int i = 0; i < nums; i++)
    {
        scanf("%d/%d", &list[i].upper, &list[i].lower);
    }

    int up = list[0].upper;
    int low = list[0].lower;

    for(int i = 1; i < nums; i++)
    {
        int temp_up = up*list[i].lower + low*list[i].upper;
        int temp_low = low*list[i].lower;

        up = temp_up;
        low = temp_low;
    }
    low *= nums;

    if(up != 0)
    {
        int min_check = check(up, low);
        up /= min_check;
        low /= min_check;
    }
    
    if(up == 0) cout << 0 << endl;
    else if(low == 1) cout << up << endl;
    else cout << up << "/" << low << endl;
}
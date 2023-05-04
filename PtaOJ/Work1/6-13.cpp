#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int sort_even(const void* _a, const void* _b)
{
    int a = *(int*)_a;
    int b = *(int*)_b;

    return a-b;
}

int sort_odd(const void* _a, const void* _b)
{
    int a = *(int*)_a;
    int b = *(int*)_b;

    return b-a;
}

void sort_array(int* a)
{
    int odd[10];
    int o_count = 0;
    int even[10];
    int e_count = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i]%2 == 0) even[e_count++] = a[i];
        else odd[o_count++] = a[i];
    }

    qsort(odd, o_count, 4, sort_odd);
    qsort(even, e_count, 4, sort_even);

    for(int i = 0; i < 10; i++)
    {
        if(i < o_count) a[i] = odd[i];
        else a[i] = even[i-o_count];

        printf("%d", a[i]);
        if(i != 9) printf(" ");
    }
}

int main(){
    int a[10];
    for (int i=0;i < 10; i++)
        cin>>a[i]; 
   sort_array(a);
    return 0;
}

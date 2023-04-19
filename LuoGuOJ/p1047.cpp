#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int L, M;
    scanf("%d %d", &L, &M);

    int trees[L+1] = {0};
    for(int i = 0; i < M; i++)
    {
        int _start, _end;   
        scanf("%d %d", &_start, &_end);

        for(int j = _start; j <= _end; j++) trees[j] = 1;
    }

    int count = 0;
    for(int i = 0; i <= L; i++)
    {
        if(trees[i] == 1) count++;
    }

    printf("%d", L+1-count);
}
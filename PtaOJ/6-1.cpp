#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

void ArrayShift( int a[], int n, int m )
{
    int b[n];
    for(int i = 0; i < n; i++)
    {
        b[i] = a[i]; 
    }

    for(int i = 0; i < n; i++)
    {
        int temp = (i+m)%n;
        a[temp] = b[i];
    }
}

#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
        
    return 0;
}

void sort( int a[], int n )
{
    int j, save;
    for(int i = 1; i < n; i++)
    {
        save = a[i];
        for(j = i - 1; 0 <= j && a[j] > save; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = save;
    }
}

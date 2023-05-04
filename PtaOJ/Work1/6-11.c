#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] );

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

void strmcpy( char *t, int m, char *s )
{
    int count = 0;
    int check = 0;
    for(int i = 0; t[i] != '\0'; i++) count++;

    if(m > count) s[0] = '\0';

    else
    {
        for(int i = m-1; t[i] != '\0'; i++)
        {
            s[check++] = t[i];
        }
    }
    s[check] = '\0';
}


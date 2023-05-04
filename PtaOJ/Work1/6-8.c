#include <stdio.h>
#include <string.h>

void FullName(char *full, const char *first, const char *middle, const char *last);

int main()
{
    char full[128], first[128], middle[128], last[128];
    gets(first);
    gets(middle);
    gets(last);
    FullName(full, first, middle, last);
    puts(full);
    return 0;
}

void FullName(char *full, const char *first, const char *middle, const char *last)
{
    int a = 0, b = 0, c = 0;
    int count = 0;
    if(strlen(first)) a = 1;
    if(strlen(middle)) b = 1;
    if(strlen(last)) c = 1;

    if(a == 0 && b == 0 && c == 0)
    {
        full[0] = 'N';
        full[1] = 'o';
        full[2] = 'n';
        full[3] = 'a';
        full[4] = 'm';
        full[5] = 'e';
        full[6] = '\0';
    }

    else
    {
        if(a)
        {
            for(int i = 0; first[i] != '\0'; i++)
            {
                full[count++] = first[i];
            }
            if(b || c) full[count++] = ' ';
        }

        if(b)
        {
            for(int i = 0; middle[i] != '\0'; i++)
            {
                full[count++] = middle[i];
            }
            if(c) full[count++] = ' ';
        }

        if(c)
        {
            for(int i = 0; last[i] != '\0'; i++)
            {
                full[count++] = last[i];
            }
        }

        full[count] = '\0';
    }
}
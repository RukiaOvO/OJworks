#include <stdio.h>

int main(void)
{
    char words[11];
    scanf("%s", words);


    for(int i = 0; words[i] !='\0'; i++)
    {
        if(65 <= words[i] && words[i] <= 90) words[i] += 32;
    }

    char txt[1000001];
    
    char c = getchar();
    int count = 0;
    while((c = getchar()) != EOF && count < 1000001)
    {
        if(c == '\n') break;
        if(65 <= c && c <= 90) c += 32;

        txt[count++] = c;
    }
    txt[count] = '\0';

    int times = 0;
    int ptr = 0;
    int x, y;
    for(x = 0, y = 0; txt[y] != '\0'; y++)
    {
        if((y == 0 || txt[y-1] == ' ' || x > 0) && words[x] == txt[y] && ++x > 0)
        {
            if((txt[y+1] == '\0' || txt[y+1] == ' ') && words[x] == '\0')
            {
                if(ptr == 0) ptr = y-x+1;
                times++;
            }
        }

        else x = 0;
    }

    if(times == 0) printf("-1");
    else printf("%d %d", times, ptr);
}
#include <stdio.h>

int main(void)
{
    char list[10];
    gets(list);

    int count = 0;
    for(int i = 0; list[i] != '\0'; i++)
    {
        if(48 <= list[i] && list[i] <= 57) count++;
        else if(65 <= list[i] && list[i] <= 90) count++;
        else if(97 <= list[i] && list[i] <= 122) count++;
    }

    printf("%d", count);
}
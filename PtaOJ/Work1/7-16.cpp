#include <bits/stdc++.h>
using namespace std;

void delchar(char *str, char c)
{
    printf("result: ");
    char newone[100];
    int count = 0;

    for(int j = 0 ; str[j] != '\0'; j++)
    {
        if(str[j] != c) newone[count++] = str[j];
    }
    newone[count] = '\0';

    cout << newone << endl;
}   

int main(void)
{
    int repeat;
    scanf("%d", &repeat);
    getchar();

    for(int i = 1; i <= repeat; i++)
    {
        char temp[100];
        scanf("%[^\n]", &temp);
        getchar();
        char check;
        scanf("%c", &check);
        getchar();

        delchar(temp, check);
    }
}
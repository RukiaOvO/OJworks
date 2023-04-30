#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char temp[20];
    char string[20];
    
    for(int i = 0; i < 5; i++)
    {
        cin >> string;
        if(strcmp(string, temp) > 0)
        {
            strcpy(temp, string);
        }
    }
    
    printf("Max is: %s\n", temp);
}
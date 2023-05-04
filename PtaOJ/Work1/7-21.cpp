#include <cstdio>
#include <cstring>

int main(void)
{
    const char * list[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int times;
    scanf("%d", &times);
    getchar();

    for(int i = 0 ; i < times; i++)
    {
        char temp[100];
        scanf("%s", &temp);
        getchar();

        int check = 0;
        for(int j = 0; j < 7; j++)
        {
            if(strcmp(temp, list[j]) == 0)
            {
                printf("%d\n", j+1);
                check = 1;
            }
        }

        if(check == 0) printf("-1"); 
    }
}
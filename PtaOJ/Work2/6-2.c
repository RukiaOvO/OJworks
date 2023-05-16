#include<stdio.h>
int fun(char *str,char *substr);
int main()
{ char str[81]="asdasasdfgasdaszx67asdmklo",substr[4]="asd";
 int n;
 n=fun(str,substr);
 printf("n=%d\n",n);
 return 0;
}

int fun(char *str,char *substr)
{
    int count = 0;

    int temp_check = 0;
    int sub_count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != substr[sub_count])
        {
            temp_check = 0;
            sub_count = 0;
        }
        
        if(str[i] == substr[sub_count++])
        {
            temp_check = 1;
            if(sub_count == 3)
            {
                sub_count = 0;
                count++;
                temp_check = 0;
            }
        }
    }

    return count;
}
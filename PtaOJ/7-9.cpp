#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int temp[20];
    int count = 0;
    
    int num1;
    scanf("%d", &num1);
    int list1[num1];
    for(int i = 0; i < num1; i++)
    {
        scanf("%d", &list1[i]);
    }

    int num2;
    scanf("%d", &num2);
    int list2[num2];
    for(int i = 0; i < num2; i++)
    {
        scanf("%d", &list2[i]);
    }

    for(int i = 0; i < num1; i++)
    {
        int check1 = 1;
        for(int j = 0; j < num2; j++)
        {
            if(list1[i] == list2[j])
            {
                check1 = 0;
                break;
            }
        }

        if(check1 == 1)
        {
            int check2 = 1;
            for(int k = i-1; k >= 0 && i >= 1; k--)
            {
                if(list1[i] == list1[k])
                {
                    check2 = 0;
                    break;
                }
            }

            if(check2 == 1) temp[count++] = list1[i];
        }
    }

    for(int i = 0; i < num2; i++)
    {
        int check1 = 1;
        for(int j = 0; j < num1; j++)
        {
            if(list2[i] == list1[j])
            {
                check1 = 0;
                break;
            }
        }

        if(check1 == 1)
        {
            int check2 = 1;
            for(int k = i-1; k >= 0 && i >= 1; k--)
            {
                if(list2[i] == list2[k])
                {
                    check2 = 0;
                    break;
                }
            }

            if(check2 == 1) temp[count++] = list2[i];
        }
    }

    for(int i = 0 ; i < count; i++)
    {
        if(i != count-1) printf("%d ", temp[i]);
        else printf("%d", temp[i]);
    }
}
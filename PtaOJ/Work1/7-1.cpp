#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char list[500001];
    cin.getline(list, 500001);
    
    int count = 0;
    int w_count = 0;
    for(int i = 0; list[i] != '\0' && list[i] != '\n'; i++)
    {
        count++;

        if(list[i] != ' ' && list[i+1] == ' ') w_count++;
    }
    if(list[count-1] != ' ') w_count++;

    int end, start;
    int p_time = 0;
    for(start = count-1, end = count-1; start >= 0; start--)
    {
        if((list[start] != ' ' && list[start-1] == ' ') || (start == 0 && list[start] != ' '))
        {
            for(int i = start; i <= end; i++)
            {
                if(list[i] != ' ')printf("%c", list[i]);
            }
            p_time++;
            end = start - 1;
            
            if(p_time < w_count) printf(" ");
        }  
    }
}
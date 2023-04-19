#include <iostream>
using namespace std;

int main(void)
{
    int s_nums, l_nums;
    while(~scanf("%d %d", &s_nums, &l_nums))
    {
        if(s_nums == 0 | l_nums == 0) break;
        
        int list[s_nums][l_nums];
        for(int i = 0; i < s_nums; i++)
        {
            for(int j = 0; j < l_nums; j++)
            {
                scanf("%d", &list[i][j]);
            }
        }

        double stu_avg[s_nums];
        for(int i = 0; i < s_nums; i++)
        {
            double temp = 0;
            for(int j = 0; j < l_nums; j++)
            {
                temp += list[i][j];
            }
            stu_avg[i] = (double)(temp/l_nums);

            if(i == 0) printf("%.2lf", stu_avg[i]);
            else printf(" %.2lf", stu_avg[i]);
        }
        printf("\n");

        double les_avg[l_nums];
        for(int i = 0; i < l_nums; i++)
        {
            double temp = 0;
            for(int j = 0; j < s_nums; j++)
            {
                temp += list[j][i];
            }
            les_avg[i] = (double)(temp/s_nums);

            if(i == 0) printf("%.2lf", les_avg[i]);
            else printf(" %.2lf", les_avg[i]);
        }
        printf("\n");
        
        int count = 0;
        for(int i = 0; i < s_nums; i++)
        {
            int check = 0;
            for(int j = 0; j < l_nums; j++)
            {
                if(list[i][j] < les_avg[j]) check = 1;
            }
            if(check == 0) count++;
        }

        printf("%d\n\n", count);
    }
}
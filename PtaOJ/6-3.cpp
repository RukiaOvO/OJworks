/* 此测试程序仅为示例，实际的测试程序可能不同，不要仅针对样例的输入和输出编写函数，而是要根据题意要求编写函数 */
#include <stdio.h>
double getScore(int *score, int total);
int main(){
    int score[5] = {92, 90, 99, 95, 98};   /* 仅为示例，实际的测试程序中，数组大小和元素数值都可能与样例不同 */
    printf("%.2f\n", getScore(score, 5) );  /* getScore( )函数只负责返回分值，由main函数中的代码负责按照2位小数打印输出 */
    return 0;
}

double getScore(int *score, int total)
{
    int j, save;
    for(int i = 1; i < total; i++)
    {
        save = score[i];
        for(j = i - 1; 0 <= j && score[j] > save; j--)
        {
            score[j + 1] = score[j];
        }
        score[j + 1] = save;
    }

    double sum = 0;
    for(int i = 1; i < total - 1; i++)
    {
        sum += score[i];
    }

    return (sum/(total-2));
}

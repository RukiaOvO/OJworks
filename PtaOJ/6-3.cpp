/* �˲��Գ����Ϊʾ����ʵ�ʵĲ��Գ�����ܲ�ͬ����Ҫ���������������������д����������Ҫ��������Ҫ���д���� */
#include <stdio.h>
double getScore(int *score, int total);
int main(){
    int score[5] = {92, 90, 99, 95, 98};   /* ��Ϊʾ����ʵ�ʵĲ��Գ����У������С��Ԫ����ֵ��������������ͬ */
    printf("%.2f\n", getScore(score, 5) );  /* getScore( )����ֻ���𷵻ط�ֵ����main�����еĴ��븺����2λС����ӡ��� */
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

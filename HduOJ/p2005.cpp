#include <iostream>
using namespace std;

int main(void)
{
    int month_list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    while (~scanf("%d/%d/%d", &y, &m, &d))
    {
        int sum = 0;
        if ((y%400) == 0 || (y%100) != 0 && (y%4) == 0)
        {
            if (m > 2) sum++;
        }

        for (int i = 0; i < m - 1; i++) sum += month_list[i];
        sum += d;
        printf("%d\n", sum);
        sum = 0;
    }
}
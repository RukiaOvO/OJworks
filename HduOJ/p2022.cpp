#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int row, column;
    while(~scanf("%d %d", &row, &column))
    {
        if(row == 0 | column == 0) break;
        
        int list[row][column];
        int newlist[row*column];

        int count = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                scanf("%d", &list[i][j]);
            }
        }
        
        int check = 0;
        int x, y;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
            {
                if(abs(check) < abs(list[i][j]))
                {
                    x = i + 1;
                    y = j + 1;
                    check = list[i][j];
                }
            }
        }

        printf("%d %d %d\n", x, y, check);
    }
}
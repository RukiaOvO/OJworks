#include <iostream>
using namespace std;

int main(void)
{
    int num;
    while (~scanf("%d", &num))
    {
        if (0 <= num && num <= 59) printf("E\n");
        else if (60 <= num && num <= 69) printf("D\n");
        else if (70 <= num && num <= 79) printf("C\n");
        else if (80 <= num && num <= 89) printf("B\n");
        else if (90 <= num && num <= 100) printf("A\n");
        else printf("Score is error!\n");
    }
}
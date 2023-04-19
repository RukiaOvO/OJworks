#include <iostream>
using namespace std;

int main()
{
    char txt[3];

    while(cin >> txt)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = i; j < 3; j++)
            {
                if (txt[i] > txt[j]) swap(txt[i], txt[j]);
            }
        }
        printf("%c %c %c\n", txt[0], txt[1], txt[2]);
    }
    
    return 0;
}
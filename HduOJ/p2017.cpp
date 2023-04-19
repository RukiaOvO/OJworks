#include <iostream>
using namespace std;

int main(void)
{
    int times;
    scanf("%d", &times);
    
    int check = 0;
    while(check < times)
    {
        char * list = new char[1024];
        cin >> list;
            
        int count = 0;
        for(int i = 0; list[i] != '\0'; i++)
        {
            if(48 <= list[i] && list[i] <= 57) count++;
        }
            
        printf("%d\n", count);
        delete [] list;
        check++;
    }

}
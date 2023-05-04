#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string list[20];
    int count = 0;
    string temp;

    while(cin >> temp)
    {
        if(temp == "#") break;

        list[count++] = temp;
    }
    
    int j;
    string save;
    for(int i = 1; i < count; i++)
    {
        save = list[i];
        for(j = i - 1; 0 <= j && list[j].size() > save.size(); j--)
        {
            list[j + 1] = list[j];
        }
        list[j + 1] = save;
    }

    for(int i = 0; i < count; i++)
    {
        cout << list[i] << " ";
    }
}
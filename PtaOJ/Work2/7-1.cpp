#include <bits/stdc++.h>
using namespace std;

struct  candidate
{
    string name;
    int nums = 0;
};

int main(void)
{
    int number;
    cin >> number;
    getchar();

    struct candidate cans[number];
    
    for(int i = 0; i < number; i++)
    {
        getline(cin, cans[i].name);
        for(int j = 0; j < (cans[i].name).size(); j++)
        {
            cans[i].name[j] = tolower(cans[i].name[j]);
        }
    }

    int times;
    cin >> times;
    getchar();

    string valid_list[100] = {"0"};
    int valid_check = 0;

    for(int i = 1; i <= times; i++)
    {
        string temp;
        getline(cin, temp);
        valid_list[valid_check++] = temp;

        for(int j = 0; j < temp.size(); j++)
        {
            temp[j] = tolower(temp[j]);
        }

        int temp_check = 0;
        for(int j = 0; j < number; j++)
        {
            if(temp == cans[j].name)
            {
                cans[j].nums++;
                temp_check = 1;
                break;
            }
        }

        if(temp_check == 1) valid_list[--valid_check] = "0";
    }

    for(int i = 0; i < number; i++)
    {
        int check = 0;

        for(int j = 1; j < number; j++)
        {
            if(cans[check].nums < cans[j].nums) check = j;
        }
        
        if(cans[check].nums != -1) cout << cans[check].name << ":" << cans[check].nums << endl;
        cans[check].nums = -1;
    }

    if(valid_check != 0)
    {
        cout << endl;
        cout << "invalid vote:" << endl;
        for(int i = 0; i < valid_check; i++)
        {
            if(valid_list[i] != "0") cout << valid_list[i] << endl;
        }
    }
}
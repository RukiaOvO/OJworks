#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string list;
    getline(cin, list);

    int count = 1;
    for(int i = 1; i < list.length()-1; i++)
    {
        int f_ptr = i-1;
        int b_ptr = i+1;
        int temp = 1;

        while(0 <= f_ptr && b_ptr <= list.length()-1)
        {
            if(list[f_ptr] != list[b_ptr]) break;

            f_ptr--;
            b_ptr++;
            temp += 2;

            count = max(count, temp);
        }
    }

    for(int i = 0; i < list.length(); i++)
    {
        int f_ptr = i;
        int b_ptr = i+1;
        int temp = 1;
        int first_check = 1;

        while(0 <= f_ptr && b_ptr <= list.length()-1)
        {
            if(list[f_ptr] != list[b_ptr]) break;

            if(first_check == 1) temp++;
            else temp += 2;
            f_ptr--;
            b_ptr++;
            first_check = 0;

            count = max(count, temp);
        }
    }
    cout << count << endl;
}
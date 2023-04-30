#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string words;
    string temp_pasg;
    string pasg;
    getline(cin, words);

    for(int i = 0; i < words.size(); i++)
    {
        words[i] = tolower(words[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        getline(cin, temp_pasg);
        for(int j = 0; j < temp_pasg.size(); j++)
        {
            if(isalpha(temp_pasg[j]))
            {
                temp_pasg[j] = tolower(temp_pasg[j]);
                pasg.push_back(temp_pasg[j]);
            }
        }

        int result1 = 0;
        int result2 = 0;
        int len = pasg.length();

        for(int j = 0; j < len && j < 20; j++)
        {
            for(int k = 0; k < words.size(); k++)
            {
                if(pasg[j] == words[k])
                {
                    result1++;
                    break;
                }
            }
        }

        if(len > 20)
        {
            for(int j = len-1; j >= len-20; j--)
            {
                for(int k = 0; k < words.size(); k++)
                {
                    if(pasg[j] == words[k])
                    {
                        result2++;
                        break;
                    }
                }
            }
        }
        int result = max(result1, result2);
        cout << result << endl;

        pasg.clear();
    }
}
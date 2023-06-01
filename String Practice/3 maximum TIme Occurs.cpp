/*
a b c a c b a d e
Here a occures maximum of 3 times
So, print 3
*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str = "abcacbade";

    int freq[26];

    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<str.size(); i++)
    {
        freq[str[i]-'a']++;
    }

    char ans = 'a';

    int maxF = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i+'a';
        }
    }

    cout<< maxF << endl;

    return 0;
}


/*
    Problem Link:
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int U=0,L=0;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            U++;
        }
        else
        {
            L++;
        }
    }
    if(U<L)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout << s << endl;
    }
    if(U>L)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
        cout << s << endl;
    }
    if(U==L)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout << s << endl;
    }


    return 0;
}


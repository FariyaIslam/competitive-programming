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

    set<char> n;
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='}' or s[i]=='{' or s[i]==',' or s[i]==' ')
            continue;

        else
            n.insert(s[i]);
    }
    cout<<n.size()<<endl;

    return 0;
}


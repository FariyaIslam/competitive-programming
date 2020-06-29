/*
    Problem Link: https://codeforces.com/problemset/problem/266/B
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char temp;
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]=='B' && s[j+1]== 'G')
            {
                temp= s[j];
                s[j]=s[j+1];
                s[j+1]= temp;
                j++;
            }
        }


    }
    cout << s;


    return 0;
}


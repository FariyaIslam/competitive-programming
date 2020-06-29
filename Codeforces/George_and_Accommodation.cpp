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

    int n,p,q,jump=0,s;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> p >> q;
        s = q-p;
        if(s>=2)
            jump++;
    }
    cout << jump;


    return 0;
}


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
    int n,jump=0;
    cin >> n;
    int x[n];
    for (int i=0; i<n; i++)
    {
        cin >> x[i];
    }
    for (int i=0; i<n; i++)
    {


        if(x[i]!=x[i+1])
        {
            jump++;
        }

    }
    cout << jump;


    return 0;
}

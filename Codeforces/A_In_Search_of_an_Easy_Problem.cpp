/*
    Problem Link: https://codeforces.com/problemset/problem/1030/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,jump=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> m;
        if(m==1)
        {
            cout << "HARD" <<endl;
            exit9(0);

        }
    }
    cout << "EASY" <<endl;

    return 0;
}

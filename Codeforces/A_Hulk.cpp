/*
    Problem Link: https://codeforces.com/problemset/problem/705/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i=1; i<n; i++)
    {
        if(i%2==1)
        {
            cout << "I hate that ";
        }
        else
        {
            cout <<"I love that ";
        }
    }
    if(n%2==1)
    {
        cout << "I hate it" <<endl;
    }
    if(n%2==0)
    {
        cout <<"I love it" <<endl;
    }
    return 0;
}


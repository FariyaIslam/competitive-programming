/*
    Problem Link: https://codeforces.com/problemset/problem/486/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n,x;
    cin >> n;
    if(n%2==0)
    {
        x= n/2;
    }
    else
    {
        x= -(n/2+1);
    }
    cout << x;

    return 0;
}


/*
    Problem Link: https://codeforces.com/problemset/problem/617/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;
    if(x%5==0)
    {
        cout << x/5;
    }
    else
    {
        cout << x/5+1;
    }
    return 0;
}


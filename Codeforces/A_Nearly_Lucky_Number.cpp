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

    int long long n, jump=0;
    cin >> n;
    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            jump++;
        }
        n=n/10;
    }
    if(jump==4 || jump==7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}


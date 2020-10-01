/*
    Problem Link: https://codeforces.com/problemset/problem/148/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k,l,m,n,d,sum=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++)
    {
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0))
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}



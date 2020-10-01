/*
    Problem Link: https://codeforces.com/problemset/problem/144/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int f,m=0,n=100,ma=0,mi=0;
    cin >> f;
    int arr[f];
    for(int i=0; i<f; i++)
    {
        cin >> arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
            ma=i;
        }
        if(arr[i]<=n)
        {
            n=arr[i];
            mi=i;
        }
    }
    if(ma>mi)
    {
        mi++;
    }
    cout << ma+(f-1)-mi;



    return 0;
}


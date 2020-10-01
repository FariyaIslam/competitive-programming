/*
    Problem Link: https://codeforces.com/problemset/problem/228/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i,cnt=0;
    int arr[4];
    for(i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+4);
    for(i=0; i<3; i++)
    {
        if(arr[i]== arr[i+1])
        {
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}


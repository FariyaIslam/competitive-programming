/*
    Problem Link: https://codeforces.com/problemset/problem/469/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[205];
    int n,i,p,q,count=0;
    cin >> n >>p;
    for(i=0; i<p; i++)
    {
        cin >>arr[i];
    }
    cin >>q;
    for(i=p; i<p+q; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+(p+q));
    for(i=0; i<p+q; i++)
    {
        if(arr[i]!= arr[i+1])
            count++;
    }
    if(count==n){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }


    return 0;
}


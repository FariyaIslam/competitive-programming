/*
    Problem Link: https://codeforces.com/problemset/problem/136/A
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
    int arr[100];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int j=1; j<=n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]==j)
            {
                cout << i+1 << " ";
            }
        }
    }

    return 0;
}


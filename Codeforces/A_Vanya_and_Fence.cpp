/*
    Problem Link: https://codeforces.com/problemset/problem/677/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, jump=0;
    cin >> n;
    int h;
    cin >> h;
    int arr[1000];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if (arr[i]>h)
        {
            jump+=2;
        }
        else
        {
            jump++;
        }

    }
    cout << jump << endl;
    return 0;
}


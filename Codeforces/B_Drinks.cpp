/*
    Problem Link: https://codeforces.com/problemset/problem/200/B
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
    float sum=0;
    int x[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        sum = sum + x[i]/100.0;
    }

    cout << float(sum/n) * 100 << "\n";

    return 0;
}


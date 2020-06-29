
/*
    Problem Link: https://codeforces.com/problemset/problem/734/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    int i,j=0,k=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0; i<n; i++)
    {
        if(s[i]== 'A')
            j++;
        if(s[i]== 'D')
            k++;
    }
    if(j>k)
    {
        cout << "Anton";
    }
    else if (j<k)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }


    return 0;
}

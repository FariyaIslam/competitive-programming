/*
    Problem Link: https://codeforces.com/problemset/problem/271/A
    Author: Fariya Islam

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    {

    int y,a,b,c,d;

    cin >> y;

    while (true)

    {

        y = y+1;

        a = y / 1000;

        b = y / 100 % 10;

        c = y / 10 % 10;

        d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)

        {

            break;

        }

    }

    cout << y << endl;

    return 0;

}







    return 0;
}


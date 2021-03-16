#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, moves=0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a%b == 0){
            moves = 0;
        }
         else if (a<b)
         {
             moves= b-a;
         }
         else if (a>b)
         {
             int temp = a/b;
             temp++;
             moves = temp*b - a;

         }
         cout << moves << endl;
    }
    return 0;
}


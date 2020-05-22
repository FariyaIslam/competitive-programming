#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a, b,res=0;
    cin >> a >> b;
    for(int i=1; i<=10; i++)
    {
        a = a*3;
        b = b*2;

        if(a>b)
        {
            res++;
            break;
        }
        else
        {
            res++;
        }
    }
    cout<< res << endl;

    return 0;
}

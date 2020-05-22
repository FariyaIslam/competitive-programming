#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, res=0;
    int a, b, position = 0, m = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        position = position - a;
        position = position + b;
        m= max(position, m);
    }
    cout << m;
    return 0;
}

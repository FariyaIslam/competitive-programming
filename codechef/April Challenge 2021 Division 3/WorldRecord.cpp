#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    float k1, k2, k3,v,var,res, mx = 9.8;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> k1 >> k2 >> k3 >> v;

        res = 100/(k1*k2*k3*v);
        var = (int)(res * 100 + .5);
        res = var/100;

        if(res >= mx){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}

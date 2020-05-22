#include<bits/stdc++.h>

using namespace std;
int main()
{
    int k, n, w, res=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        res=res+(i*k);
    }
    if(res<=n)
    {
        cout << "0" <<endl;
    }

    else
    {
        cout << res-n <<endl;
    }
    return 0;
}

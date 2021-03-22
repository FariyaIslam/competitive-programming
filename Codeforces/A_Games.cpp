#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int n,h[32],a[32], cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(h[i] == a[j]){
                /*
                cout << "Found = " << h[i] << ", "
                << a[j] << " i, j " << i << " , " << j << endl;
                cout << "Count  = " << cnt;
                */
                cnt++;
            }

        }
    }
    cout << cnt << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin >> n;
    char str[60];
    cin >> str;

    for(int i=0; i<n; i++){
        if(str[i] == str[i+1])
            cnt++;
    }
    cout << cnt;


    return 0;
}

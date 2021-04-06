#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int cnt = 0;
    while(n){
        if(n >= 100){
           cnt += n/100;
           n =  n % 100;
        }else if(n >= 20){
            cnt += n/20;
            n =  n % 20;
        }else if(n >= 10){
            cnt += n/10;
            n =  n % 10;
        }else if(n >=5){
            cnt += n/5;
            n =  n % 5;
        }else {
            cnt += n;
            n = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}

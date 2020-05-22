#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char name[105];
    cin>> n;
    while(n--) {
        scanf("%s", name);
        int len = strlen(name);
      if(len > 10){
            cout << name[0] << len-2 << name[len-1] << "\n";
        }else {
            cout << name << "\n";
        }
    }



    return 0;
}

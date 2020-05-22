#include<iostream>
using namespace std;

int main()
{
    int p=0;
    int a[105];
    int n, k;
    cin>> n >> k;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int val=a[k-1];
    for(int j=0; j<n; j++)
    {
        if(a[j]>=val && a[j]!=0)
        {
           p=p+1;
        }
    }
    cout <<p << endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char a[100],b[100];

    cin >> a >> b;
    n = strlen(a);

    for(int i = 0;i < n; i++)
    {
        a[i] = toupper(a[i]);
    }

    for(int i = 0; i< n; i++)
    {
        b[i]=toupper(b[i]);
    }

    m = strcmp(a,b);
    if(m == 0)
    {
    	cout << "0" << endl;
    }
    else if(m == -1)
    {
    	cout << "-1" << endl;
    }
    else
    {
    	cout << "1" << endl;
    }

    return 0;
}


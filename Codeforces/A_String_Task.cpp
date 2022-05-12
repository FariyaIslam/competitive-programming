#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    string n, s;
    cin >> n;
    int len = n.length();
    for(int i=0; i<len; i++)
    {
        if(n[i]== 'a'|| n[i]== 'e'|| n[i]== 'i'|| n[i]== 'o'|| n[i]== 'u'|| n[i]== 'y'|| n[i]== 'A'|| n[i]== 'E'|| n[i]== 'I'|| n[i]== 'O'|| n[i]== 'U'|| n[i]== 'Y')
        {
            continue;
        }else{
            s += '.';
            s += tolower(n[i]);
        }
    }
    cout<<s<<endl;
}

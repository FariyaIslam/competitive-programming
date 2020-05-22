#include<bits/stdc++.h>

using namespace std;
int main()
{
    set<char> n;
    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++)
    {
        n.insert(str[i]);
    }



    if (n.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" <<endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}

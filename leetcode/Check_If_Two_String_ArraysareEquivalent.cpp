#include<bits/stdc++.h>
using namespace std;


 bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;

        for(int i=0; i<word1.size(); i++)
        {
            str1 = str1 + word1[i];
        }
        for(int j=0; j<word2.size(); j++)
        {
            str2 += word2[j];
        }
   return (str1==str2) ? true : false;

    }

int main()
{
    vector<string> word1 {"ab", "c"};
    vector<string> word2 {"a", "bc"};
    cout << arrayStringsAreEqual(word1, word2);

    return 0;
}

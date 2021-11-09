#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = vect[0].size();
    int sum = 0;

    for(int i=0; i<vect.size(); i++){
        for(int j=0; j<vect.size(); j++){
            //cout << "i = " << i << ", j = " << j <<"\t" << vect[i][j] << endl;
            if(i == j || i+j == (n-1)) sum += vect[i][j] ;
        }
    }
    cout << "Result = " << sum << endl;
    return 0;
}

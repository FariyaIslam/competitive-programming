#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> gain = {-5,1,5,0,-7};
    vector<int> res;
    res.push_back(0);
    //res.push_back(gain[0]);
    int preSum = 0;
    for(int i=0; i<gain.size(); i++){
        //int temp = preSum + gain[i];
        preSum += gain[i];
        res.push_back(preSum);
    }

    int large = *max_element(res.begin(), res.end());
    cout << "Large " << large << endl;

    return 0;
}

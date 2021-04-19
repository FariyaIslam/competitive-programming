#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
    int res = 0, last = 0;


    for(int x : nums)
        if(x <= last)
        {
            res += ++last-x;
            cout << res << endl;
        }
        else {
            last = x;
        }
    return res;
}

int main()
{
    vector<int> nums = {1,5,2,4,1};
    cout << minOperations(nums);
    return 0;
}

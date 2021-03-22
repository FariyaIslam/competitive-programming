#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int cnt = 0;
        vector<int> F;
        for(int i = 0; i<nums.size(); i++)
        {
            cnt= 0;
            for(int j = 0; j<nums.size(); j++)
            {
                if( j != i && nums[i] > nums[j])
                    cnt++;
            }

            F.push_back(cnt);
            cout << F[i] << endl;
        }
        return F;
}

int main()
{
    vector<int> v = {8,1,2,2,3};
    smallerNumbersThanCurrent(v);

    return 0;
}

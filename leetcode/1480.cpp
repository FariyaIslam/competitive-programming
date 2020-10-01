
#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i=1; i<nums.size(); i++)
        {
            nums[i] = nums[i-1]+nums[i];
        }
    return nums;
}

int main()
{
    vector<int> nums{1,2,3,4};
    runningSum(nums);

    for(auto k : nums){
        cout << k << endl;
    }

    return 0;
}


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res=0;
        for(int i=0; i<nums.size(); i++)
            for(int j=i+1; j<nums.size(); j++)
            {
                if(k==nums[i]-nums[j] || k==nums[j]- nums[i])
                {
                      res++;
                }

            }
        return res;

    }

};

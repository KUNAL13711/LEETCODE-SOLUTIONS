class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*--- BRUTE-FORCE:
        T.C: O(n*n)
        S.C: O(1)+O(m) {O(m) is used to return the answer. ---*/
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
        
    }
};

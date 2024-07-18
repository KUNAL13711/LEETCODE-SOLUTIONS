class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*--- OPTIMAL:
        T.C: O(nlogn)
        S.C: O(n)+O(m) {n= size of map= size of array}
        O(m) is used to return the answer. ---*/
        map<long long,int> m1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];//remaining sum to reach target.
            if(m1.find(rem)!=m1.end())
            {
                ans.push_back(m1[rem]);
                ans.push_back(i);
            }
            m1[nums[i]]=i;
        }
        return ans;
        
    }
};

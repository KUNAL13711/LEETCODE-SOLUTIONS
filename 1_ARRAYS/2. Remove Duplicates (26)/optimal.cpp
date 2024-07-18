class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        /*--- OPTIMAL: TWO-POINTERS APPROACH
        T.C: O(n)
        S.C: O(1) ---*/
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j];
            }
        }
        return (i+1);
        
    }
};

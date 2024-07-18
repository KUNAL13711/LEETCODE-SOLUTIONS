class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        /*--- BRUTE-FORCE: duplicates not allowed means unique,
        and whenever unique comes we think about SET. ---*/

        /*---NOTE: although if only number of unique elements asked
        then this for-each loop is not required, but as it is asked
        in-place that is all unique elements should be stored in 
        starting of the actual array. so for this reason only
        we are storing these in actual array with this for-each loop.
        ---*/

        /*--- T.C: O(nlogn)+O(n)
        S.C: O(n) {size of set in worst case} ---*/
        
        set<int> s1;
        for(int i=0;i<nums.size();i++)
        {
            s1.insert(nums[i]);
        }
        //for in-place:
        int index=0;
        for(auto x: s1)
        {
            nums[index++]=x;
        }
        return s1.size();
        
    }
};

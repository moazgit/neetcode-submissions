class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int unique=1;
        for(int r=1;r<nums.size();r++){
            if(nums[r]!=nums[l]){
                l++;
                nums[l] = nums[r];
                unique++;
            }
        }
        return unique;
    }
};
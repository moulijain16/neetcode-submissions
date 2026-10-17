class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                int mini=nums[i+1];
                return mini;
            }
        }        
        return mini;
    }
};

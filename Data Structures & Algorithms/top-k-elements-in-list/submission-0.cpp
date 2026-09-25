class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(int j=0;j<k;j++){
            int maxNum=0;
            int maxFreq=0;
            for(auto x:mp){
                if(x.second>maxFreq){
                    maxFreq=x.second;
                    maxNum=x.first;
                }
            }
            ans.push_back(maxNum);
            
            mp.erase(maxNum);
        }
        return ans;
    }
};

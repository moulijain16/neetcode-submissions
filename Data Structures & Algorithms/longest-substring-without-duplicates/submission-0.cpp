class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        unordered_map<char,int>mp;
        int start=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                start=max(start,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            int len =i-start+1;
            maxlen=max(len,maxlen);
        }
        return maxlen;
        
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        return false;
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i])
             break;
            if(i==25)
             return true;
        }
        for(int i=n;i<m;i++){
            freq2[s2[i-n]-'a']--;
            freq2[s2[i]-'a']++;

            
            bool same=true;
            for(int k=0;k<26;k++){
                if(freq1[k]!=freq2[k]){
                    same =false;
                    break;
                }
            }
            if(same)
            return true;
        }
        return false;
        
    }
};

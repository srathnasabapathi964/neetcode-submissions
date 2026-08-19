class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char>charset;
        int l = 0;
        int res = 0;
        
        for(int i = 0;i<n;i++){
           while(charset.find(s[i])!=charset.end()){
             charset.erase(s[l]);
             l++;
           } 
         charset.insert(s[i]);
         res = max(res,(i-l+1));
         

        }
    return res;
    }
};

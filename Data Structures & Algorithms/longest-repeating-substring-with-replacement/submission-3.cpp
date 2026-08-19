class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq = 0;
        int i = 0;
        int j = 0;
        int n = s.length();
        int maxlength = 0;
         map<char,int>count;
        while(j<n){
        
        count[s[j]]++;
        maxfreq = max(maxfreq,count[s[j]]);

       while((j-i+1) - maxfreq > k){
        count[s[i]]--;
        i++;
       }

       maxlength = max(maxlength,(j-i+1));
       j++;
     
    }

return maxlength;
    }
};

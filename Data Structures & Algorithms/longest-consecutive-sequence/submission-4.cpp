class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> numsset(nums.begin(),nums.end());
       int longest = 0;
        int n = nums.size();
       for(auto it = numsset.begin();it!=numsset.end();it++){
        if(numsset.find(*it-1) == numsset.end()){
            int length = 1;
            while(numsset.find(*it+length)!= numsset.end()){
                length++;
            }
         longest = max(longest,length);
        }
       
      
       }
    
      
     return longest;
    }

};

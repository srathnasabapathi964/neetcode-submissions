class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;

        for(int i =0;i<nums.size();i++){
              int remval = target - nums[i];
              if(mpp.find(remval)!=mpp.end()){
                return{mpp[remval],i}; 
              }
              else{
                mpp[nums[i]] = i;
              }
        }

      return{};

      }
};

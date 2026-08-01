class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       vector<pair<int,int>>arr;

       for(int i =0;i<nums.size();i++){
        arr.push_back({nums[i],i});
       }

    sort(arr.begin(),arr.end());

      int i = 0;
      int n = nums.size();
      int j = n-1;

      while(i<j){
    int sum = arr[i].first + arr[j].first;

    if(sum>target){
        j--;
}

else if(sum<target){
    i++;
}
else{
    vector<int> ans = {arr[i].second, arr[j].second};
    sort(ans.begin(), ans.end());
    return ans;
}
      }

return{};     
     
     
      }
};

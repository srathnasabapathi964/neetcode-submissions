class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>mpp;

       for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<pair<int,int>>arr;

        for(auto it = mpp.begin(); it!=mpp.end();it++){
            arr.push_back({it->second,it->first});
        } 
        sort(arr.rbegin(),arr.rend());

        vector<int> res;

        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }

        return res;
    
    
    
    
    }



};

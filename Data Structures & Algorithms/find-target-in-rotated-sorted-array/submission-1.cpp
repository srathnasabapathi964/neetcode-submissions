class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;

        int res = nums[0];

        while(l<=r){
         int mid = l + (r-l)/2;
        if(nums[mid]==target){
            return mid;
        }
//left half is sorted
        if(nums[l]<=nums[mid]){
          
          if(nums[l]<=target&&nums[mid]>target){
            r = mid-1;
          }
          //element not in left half
          else{
            l = mid+1;
          }
}
//right half is sorted
else{
 if(nums[mid]<target&&nums[r]>=target){
    l = mid+1;
 }
 //element not in right half
 else{
    r = mid-1;
 }

}


        }
    return -1;
    }
};

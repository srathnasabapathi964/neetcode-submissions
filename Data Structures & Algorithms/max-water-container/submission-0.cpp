class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
int maxi = 0;
        while(i<j){
            int area = (j-i)*(min(heights[i],heights[j]));
          
           if(heights[i]<heights[j]){
            i++;
           }
           else if(heights[j]<heights[i]){
            j--;
           }
           else{
            i++;
            j--;

           }
        
         maxi = max(maxi,area);

           
        }

return maxi;
    }
};

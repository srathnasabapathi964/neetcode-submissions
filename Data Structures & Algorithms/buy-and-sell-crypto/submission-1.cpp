class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
         int n = prices.size();

        int maxi = 0;
        while(j<n){
            if(prices[j]>prices[i]){
            int diff = prices[j] - prices[i];
            maxi = max(maxi,diff);
            }
        
        else{
            i=j;
        }
     
     j++;
           
        
        }

       return maxi;
   
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0 ; 
        int sell = INT_MAX  ; 
        for(auto it : prices){
            
            sell = min(sell, it); 
            maxProfit = max(maxProfit, it - sell); 
        }

        return maxProfit ; 
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int profit = 0;
        int left = 0;
        for (int i=1; i<prices.size(); i++){
            if (prices[i]<prices[left]){
                left = i; 
            }
            profit = prices[i]-prices[left]; 
            maxi = max(maxi, profit); 
        }
    return maxi;
    }

};

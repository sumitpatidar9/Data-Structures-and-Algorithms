class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int n = prices.size();

        int maximum = 0;

        while(j<n){

            if(prices[i] > prices[j]){
                i = j;
                j++;
            }

            else{
                maximum = max(maximum, prices[j]-prices[i]);
                j++;
            }
        }

        return maximum;
    }
};
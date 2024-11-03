class Solution {
public:
    int maximum(vector<int> piles){
        int maxElement = INT_MIN;
        int n = piles.size();
        for(int i = 0; i<n; i++){
            maxElement = max(maxElement, piles[i]);
        }
        return maxElement;
    }

    long long int maxHours(vector<int> piles, int hrs){
        int n = piles.size();
        long long int maxHrs = 0;
        for(int i = 0; i<n; i++){
            maxHrs += ceil((long double)piles[i] / (long double)hrs);
        }
        return maxHrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high= maximum(piles);
        int ans = 0;

        while(low <= high){ 
            int mid = (low+high)/2;

            if(maxHours(piles, mid) <= h){
                ans = mid;
                high = mid-1;
            }

            else{
                low = mid+1;
            }
        }

        return ans;
    }
};
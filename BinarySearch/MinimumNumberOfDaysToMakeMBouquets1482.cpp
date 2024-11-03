class Solution {
public:
    
    vector<int> minMax(vector<int> a){
        int minimum = INT_MAX;
        int maximum =  INT_MIN;
        int n = a.size();

        for(int i = 0; i<n; i++){
            minimum = min(minimum, a[i]);
            maximum = max(maximum, a[i]);
        }
        vector<int> range(2,0);
        range[0] = minimum;
        range[1] = maximum;
        return range; 
    }


    bool ifPossible(vector<int> a, int day, int m, int k){
        int count = 0;
        int noBouq = 0;
        int n = a.size();

        for(int i = 0; i<n; i++){
            if(a[i]<=day){
                count++;
            }
            else{
                noBouq += (count/k);
                count = 0;
            }
        }

        noBouq += (count/k);
        if(noBouq >= m) return true;
        else return false;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low = minMax(bloomDay)[0];
        int high = minMax(bloomDay)[1];
        int n = bloomDay.size();

        long long int  product = m * 1ll * k * 1ll;;

        if(product > n){
            return -1;
        }
        int ans = 0;

        while(low <= high){
            int mid = (low+high)/2;

            if(ifPossible(bloomDay, mid, m, k)){
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
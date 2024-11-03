class Solution {
public:

    int Max(vector<int> a){
        int maximum =  INT_MIN;
        int n = a.size();
        for(int i = 0; i<n; i++){
            maximum = max(maximum, a[i]);
        }
        return maximum;
    }


    int isLess(vector<int> a, int num){
        int n = a.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += ceil((double)a[i]/(double)num);
        }
        return sum;
    }

    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = Max(nums);
        int ans = 0;
        int n = nums.size();

        if(n > threshold){
            return -1;
        }

        while(low <= high){
            int mid = (low+high)/2;
            if(isLess(nums, mid) <= threshold){
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
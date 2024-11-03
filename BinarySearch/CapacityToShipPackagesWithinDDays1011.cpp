class Solution {
public:

    int  minCapacity(vector<int> a){
        int maximum = 0;
        int n = a.size();
        for(int i = 0; i<n; i++){
            maximum = max(maximum, a[i]);
        }
        return  maximum;
    }

    int maxCapacity(vector<int> a){
        int sum = 0;
        int n = a.size();
        for(int i = 0; i<n; i++){
            sum += a[i];
        }

        return sum;
    }


    int Days(vector<int> a, int capacity){
        int days = 0;
        int sum = 0;
        int n = a.size();

        for(int i = 0; i<n; i++){
            if( (sum + a[i]) <= capacity){
                sum = sum + a[i];
            }
            else{
                days++;
                sum = a[i];
            }
        }

        days++;

        return days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int low = minCapacity(weights);
        int high = maxCapacity(weights);
        int ans = 0;

        while(low <= high){
            int mid = (low+high)/2;

            if(Days(weights, mid) <= days){
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
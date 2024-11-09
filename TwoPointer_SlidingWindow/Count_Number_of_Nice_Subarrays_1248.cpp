class Solution {
public:

    int findLess(vector<int> a, int k){
        int i = 0;
        int j = 0;
        int count = 0;
        int n = a.size();
        int sum = 0;

        if(k == -1) return 0;

        while(j<n){
            sum = sum +  (a[j]%2);

            while(sum > k){
                sum = sum - (a[i]%2);
                i++;
            }

            count = count + (j-i+1);
            j++;
        }

        return count;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {
        return findLess(nums, k) - findLess(nums, k-1);
    }
};
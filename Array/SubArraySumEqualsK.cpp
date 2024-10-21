class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        int n = nums.size();
        int sum = 0;
        int count = 0;

        for(int i = 0; i<n; i++){
            sum = sum + nums[i];

            if(sum == k){
                count++;
            }

            int rem = sum-k;
            if(mapp.find(rem) != mapp.end()){
                count = count + mapp[rem];
            }

            mapp[sum]++;
        }

        return count;
    }
};
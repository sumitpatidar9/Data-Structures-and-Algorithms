class Solution {
public:
    int findSum(vector<int> a, int goal){

        int sum  = 0;
        int i = 0;
        int j = 0;
        int n = a.size();
        int maximum = 0;

        if(goal == -1) return 0;

        while(j<n){
            sum = sum + a[j];

            while(sum > goal){
                sum = sum-a[i];
                i++;
            }

            maximum = maximum + (j-i+1);
            j++;
        }

        return maximum;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return findSum(nums, goal) - findSum(nums, goal-1);
    }
};
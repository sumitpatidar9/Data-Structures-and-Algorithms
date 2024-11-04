class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n, -1);

        for(int i = (2*n - 1); i>=0; i--){
            
            while( !st.empty() && nums[st.top()] <= nums[i%n] ){
                st.pop();
            }

            if(i<n){
                if(st.empty()){
                    ans[i] = -1;
                }

                else{
                    ans[i] = nums[st.top()];
                }
            }

            st.push(i%n);
        }

        return ans;
    }
};
class Solution {
public:

    vector<int> pse(vector<int> a){
        int n = a.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for(int i = 0; i<n; i++){
            while( !st.empty() && a[st.top()] > a[i]){
            st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return ans;
    }


    vector<int> nse(vector<int> a){
        int n = a.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for(int i = n-1; i>= 0; i--){
            while( !st.empty() && a[st.top()] >= a[i]){
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return ans;
    }


    int sumSubarrayMins(vector<int>& arr) {
        vector<int> PSE = pse(arr);
        vector<int> NSE = nse(arr);
        int n = arr.size();
        long long int total = 0;

        long long int mod = (int)1e9+7;

        for(int i = 0; i<n; i++){

            long long int next = NSE[i] - i;
            long long int prev = i - PSE[i];

            total = (total + (next*prev*arr[i]%mod))%mod;
        }

        return total;
    }
};
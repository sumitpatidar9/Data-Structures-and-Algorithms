vector<int> Solution::prevSmaller(vector<int> &A) {
    
    int n = A.size();
    stack<int> st;
    vector<int> ans(n,-1);
    
    for(int i = 0; i<n; i++){
        
        while(!st.empty() && A[st.top()] >= A[i]){
            st.pop();
        }
        
        ans[i] = st.empty() ? -1 : A[st.top()];
        st.push(i);
    }
    
    return ans;
}

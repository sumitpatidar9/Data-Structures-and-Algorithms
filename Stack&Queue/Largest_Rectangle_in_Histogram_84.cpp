class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        int n = heights.size();

        for(int i = 0; i<n; i++){
            while( !st.empty() && heights[st.top()] > heights[i] ){
                
                int ele = heights[st.top()];
                int nse = i;
                st.pop();  
                int pse = st.empty() ?  -1 : st.top();
                area = max(area, (nse-pse-1)* ele );
            }

            st.push(i);
        }

        while(!st.empty()){
                int ele = heights[st.top()];
                int nse = n;
                st.pop();

                int pse = st.empty() ? -1 : st.top();
                area = max(area, (nse-pse-1)*ele );
        }

        return area;
    }
};
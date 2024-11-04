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


    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> preSum(n, vector<int>(m, 0));

        int sum = 0;
        int area = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[j][i] == '1'){
                    sum+=1;
                }
                else if(matrix[j][i] == '0'){
                    sum = 0;
                }
                preSum[j][i] = sum;
            }
            sum = 0;
        }

        for(int i = 0; i<n; i++){
            area = max(area, largestRectangleArea(preSum[i]));
        }

        return area;
    }
};
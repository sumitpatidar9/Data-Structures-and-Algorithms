class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n);
        vector<int> column(m);




        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == 0){
                    column[j] = 1;
                    row[i] = 1;
                }
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(row[i] || column[j]){
                    matrix[i][j] = 0;
                }
            }
        }

        return;
    }
};
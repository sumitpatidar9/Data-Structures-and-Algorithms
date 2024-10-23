class Solution {
public:

    vector<int> returnRowColumn(int count,int rows, int columns){
        int row = count/columns;
        int column = (count%columns);

        return {row, column};
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int end = n*m-1;
        int start = 0;

        int mid = 0;

        while(start <= end){
            mid = (start+end)/2;
            vector<int> RC = returnRowColumn(mid, n, m);

            if( matrix[RC[0]][RC[1]] == target ){
                return true;
            }

            if(matrix[RC[0]][RC[1]] > target ){
                end = mid - 1;
            }

            else{
                start = mid + 1;
            } 
        }

        return false;
    }
};
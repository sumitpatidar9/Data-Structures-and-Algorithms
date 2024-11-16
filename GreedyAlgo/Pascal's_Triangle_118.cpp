class Solution {

public:
    vector<int> row(int n){
        vector<int> temp;
        temp.push_back(1);
        long long int ans = 1;

        for(int col = 1; col< n; col++){
            ans = ans*(n-col);
            ans = ans/(col);

            temp.push_back(ans);
        }

    return temp;
    }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;

        for(int i = 1; i<= numRows; i++){
            vector<int> temp = row(i);
            answer.push_back(temp);
        }

        return answer;
    }
};
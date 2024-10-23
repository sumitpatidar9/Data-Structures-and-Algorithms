class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int number;
        int carry;
        int sum;

        vector<int> ans;

        for(int i = n-1; i>=0; i--){
            if(i == n-1){
                number = digits[i] + 1;
                carry = number/10;
                sum = number%10;
                ans.push_back(sum);
            }

            else{
            number = digits[i] + carry;
            carry = number/10;
            sum = number%10;
            ans.push_back(sum);
            }
        }
        if(carry != 0){
            ans.push_back(carry);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
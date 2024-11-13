class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int arr[3] = {0,0,0}; //5 10 20
        int n = bills.size();

        for(int i = 0; i<n; i++){

            if(bills[i] == 5){
                arr[0]++;
            }

            else if(bills[i] == 10){
                if(arr[0]){
                    arr[1]++;
                    arr[0]--;
                }

                else{
                    return false;
                }
            }

            else{

                if(arr[1] >= 1 && arr[0] >= 1){
                    arr[1]--;
                    arr[0]--;
                    arr[2]++;
                }

                else if(arr[0] >= 3){
                    arr[0] = arr[0]-3;
                    arr[2]++;
                }              

                else {
                    return false;
                }
            }
        }

        return true;
    }
};
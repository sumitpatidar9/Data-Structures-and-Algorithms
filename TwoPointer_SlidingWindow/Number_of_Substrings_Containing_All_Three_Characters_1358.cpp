class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0; 
        int j = 0;
        int n = s.size();
        int count = 0;


        int mapp[3] = {-1,-1,-1};

        while(j<n){
            mapp[ s[j] - 'a'] = j;

            if(mapp[0] != -1 && mapp[1] != -1 && mapp[2] != -1){
                int mini = min(mapp[0], mapp[1]);
                count = count + 1 + min(mini, mapp[2]);
            } 
            j++;     
        }

        return count;
    }
};
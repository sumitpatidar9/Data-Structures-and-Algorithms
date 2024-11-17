class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int i = 0;
        int j = 0;

        while(i<n && j<m){
            if(s[i] == t[j]){
                i++, j++;
            }

            else{
                return false;
            }
        }

        if(i<n || j<m) return false;
        return true;
    }
};
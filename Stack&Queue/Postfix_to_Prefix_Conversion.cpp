
class Solution {
  public:
    string postToPre(string s) {
        int i = 0;
        stack<string> st;
        int n = s.size();
        
        while(i<n){
            if(isalnum(s[i])){
                st.push(string(1, s[i]));
            }
            
            else{
                string first = st.top(); st.pop();
                string second = st.top(); st.pop();
                string ex = s[i] + second + first;
                st.push(ex);
            }
            
           i++; 
        }
        return st.top();
    }
};
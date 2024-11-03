class Solution {
  public:
    string preToPost(string s) {
        int n = s.size();
        int i = n-1;
        stack<string> st;
        
        
        while(i>=0){
            
            if(isalnum(s[i])){
                st.push(string(1, s[i]));
            }
            
            else{
                string first = st.top(); st.pop();
                string second = st.top(); st.pop();
                
                string ex = first + second + s[i];
                st.push(ex);
            }
            i--;
        }
        
        return st.top();
    }
};
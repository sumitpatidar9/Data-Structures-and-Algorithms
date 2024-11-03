
class Solution {
  public:
    string postToInfix(string s) {
       int n = s.size();
       stack<string> st;
       

       for(int i = 0; i<n; i++){
           
            if (isalnum(s[i])) { 
                st.push(string(1, s[i]));
            }
            
            else{
             
                string first = st.top();
                st.pop();
                
                string second = st.top();
                st.pop();
                
                string ex = "(" + second + s[i] + first + ")";
                st.push(ex);
            }
       }
       
       return st.top();
    }
};
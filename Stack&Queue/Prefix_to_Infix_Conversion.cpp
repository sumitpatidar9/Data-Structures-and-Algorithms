class Solution {
  public:
    string preToInfix(string s) {
       int n = s.size();
       stack<string> st;
       

       for(int i = n-1; i>=0; i--){
           
            if (isalnum(s[i])) { 
                st.push(string(1, s[i]));
            }
            
            else{
             
                string first = st.top();
                st.pop();
                
                string second = st.top();
                st.pop();
                
                string ex = "(" + first + s[i] + second + ")";
                st.push(ex);
            }
       }
       
       return st.top();
    }
};
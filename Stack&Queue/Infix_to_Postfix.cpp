
class Solution {
  public:
  
    int priority(char ch){
        if(ch == '^') return 3;
        else if(ch == '*' || ch == '/') return 2;
        else if(ch == '-' || ch == '+') return 1;
        else return -1;
    }
    
    string infixToPostfix(string s) {
        
        int i = 0; 
        int n = s.size();
        string ans;
        stack<char> st;
        
        for(int i = 0; i<n; i++) {
            
            if( (s[i] >= 'a' && s[i]<= 'z') || (s[i]>= 'A' && s[i] <= 'Z') || 
                (s[i] >= '0' && s[i]<= '9') ){
                    ans = ans+s[i];
                }
                
            else if(s[i] == '('){
                st.push(s[i]);
            }
            
            else if(s[i] == ')'){
                while(st.top() != '('){
                    ans = ans + st.top();
                    st.pop();
                }
                
                st.pop();
            }
            
            
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top()) ){
                    ans = ans+st.top();
                    st.pop();
                }
                
                st.push(s[i]);
            }
            
        }
        
        
        while(!st.empty()){
            ans = ans+st.top();
            st.pop();
        }
        
        return ans;
    }
};
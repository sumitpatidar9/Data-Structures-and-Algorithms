class Solution {
  public:

    vector<int> findUnion(vector<int> &a, vector<int> &b) {
    
        
        int i = 0;
        int j = 0;
        vector<int> Union;
        
        while(i<a.size() && j<b.size()){
            if(a[i]<= b[j]){
                if(Union.size() == 0 || Union.back() != a[i]){
                    Union.push_back(a[i]);
                }
                 i++;
            }
            
            else{
                if(Union.size() == 0 || Union.back() != b[j]){
                    Union.push_back(b[j]);
                }
                 j++;
            }
        }
        
        
        while(i<a.size()){
            if(Union.back() != a[i]){
                    Union.push_back(a[i]);
            }
            i++;
        }
        
        
        while(j<b.size()){
            if(Union.back() != b[j]){
                    Union.push_back(b[j]);
                }
                j++;
        }
        
        return Union;
    
    }
};








class Solution {
  public:

    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        set<int> st;
        vector<int> answer;
        
        for(int i = 0; i<a.size(); i++){
            st.insert(a[i]);
        }
        
        for(int j = 0; j<b.size(); j++){
            st.insert(b[j]);
        }
        
        for(auto it : st){
            answer.push_back(it);
        }
        
        return answer;
    }
};





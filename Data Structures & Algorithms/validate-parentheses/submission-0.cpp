class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return true;
        stack<char>st;

        for(int i=0;i<s.size();i++){
            
            if(st.empty() && (s[i]==')' ||s[i]=='}'||s[i]==']')){
                return false;
            }

            if(st.empty() || s[i]=='(' ||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }

            if((st.top()=='(' && s[i]==')') ||(st.top()=='{' &&  s[i]=='}')||(st.top()=='[' && s[i]==']') ){
                st.pop();
            }
        }

        return st.empty();
        
    }
};

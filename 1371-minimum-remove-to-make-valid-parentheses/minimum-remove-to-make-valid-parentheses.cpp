class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // stack<int>st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(i);
        //     }
        //     else if(!st.empty() && s[i]==')'){
        //         st.pop();
        //     }
        //     else if(st.empty() && s[i]==')'){
        //         s[i]='#';
        //     }

        // }
        // while(!st.empty()){
        //     s[st.top()]='#';
        //     st.pop();
        // }
        // string ans="";
        // for(char c:s){
        //     if(c!='#'){
        //         ans+=c;
        //     }
        // }
        // return ans;





        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(!st.empty() && s[i]==')'){
                st.pop();

            }
            else if(st.empty() && s[i]==')'){
                s[i]='#';
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        string ans="";
        for(char c:s){
            if(c!='#'){
                ans+=c;
            }
        }
        return ans;
    }
};
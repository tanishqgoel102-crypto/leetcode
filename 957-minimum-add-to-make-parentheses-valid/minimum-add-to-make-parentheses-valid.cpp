class Solution {
public:
    int minAddToMakeValid(string s) {
    stack<char>st;
    int add=0;
    for(char c:s){
        if(c=='('){
            st.push(c);
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                add++;
            }
        }
    }
    

    return st.size()+add;
    }
};
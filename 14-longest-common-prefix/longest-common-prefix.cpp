class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp="";
        for(int i=0;i<strs[0].size();i++){
            for(auto s:strs){
                if(s[i]!=strs[0][i]){
                    return temp;
                }

            } temp+=strs[0][i];
        } return temp;
       
    }
};
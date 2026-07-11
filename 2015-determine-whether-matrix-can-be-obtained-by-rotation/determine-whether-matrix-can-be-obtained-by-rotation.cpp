class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        // vector<vector<int>> ans(n,vector<int>(n));
        // int count=0;
        // while(count<4){
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         ans[j][n-i-1]=mat[i][j];
        //     }
        // } 
        // mat=ans;
        // count++;
        // if(ans==target){
        //     return true;
        // }
        // } return false;


        for(int count=0;count<4;count++){
            if(mat==target){
                return true;
            }
            vector<vector<int>> ans(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[j][n-1-i]=mat[i][j];
                }
            }mat=ans;
        } return false;
    }
};
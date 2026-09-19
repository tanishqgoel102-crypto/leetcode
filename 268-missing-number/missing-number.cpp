class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=i){
        //         return i;
        //     }
        // } return nums.size();


        // int ans=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     ans=ans^i;
        // }
        // for(int i=0;i<nums.size();i++){
        //     ans=ans^nums[i];
        // }return ans;


        int n=nums.size();
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        for(int i=0;i<=n;i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }return -1;
    }
};
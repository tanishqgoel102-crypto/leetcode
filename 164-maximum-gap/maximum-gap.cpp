class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int gap=0;
        int max_gap=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                gap=nums[i+1]-nums[i];
                max_gap=max(gap,max_gap);
            }
           
        }
        return max_gap;
    }
};
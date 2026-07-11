class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int count=0;
    //     for(int i=1;i<nums.size();i++){
    //         if(nums[i]==nums[i-1]){
    //             count++;
    //         }
    //         else{
    //             count=1;
    //         }
    //         if(count>=nums.size()/2){
    //             return nums[i];
    //         }
    //     } return 0;


        // ALSO we can do
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];

        int candidate=nums[0];
        int count=1; 
        for(int i=1;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
            }
            if(candidate==nums[i]){
                count++;
            }
            else{
                count--;
            }
            
        } return candidate;
        // int finalcount=0;
        // int ans=-1;
        // for(int i=0;i<nums.size();i++){
        //     if(candidate==nums[i]){
        //         finalcount++;
        //     }
        //     if(finalcount>nums.size()/2){
        //         ans=nums[i];
        //     }
        // } return ans;
    }
};
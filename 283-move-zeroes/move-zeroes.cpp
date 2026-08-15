class Solution {
public: 
void moveZeroes(vector<int>& nums){
// int non_zero=0; // jha non zero value store hogi
// for(int j=0;j<nums.size();j++){
//     if(nums[j]!=0){  
//         swap(nums[j],nums[non_zero]); 
//         non_zero++;
//     }
// }


// int slow=0;
// for(int fast=0;fast<nums.size();fast++){
//     if(nums[fast]!=0){
//         swap(nums[slow],nums[fast]);
//         slow++;
//     }
// } 




// int slow=0;

// for(int fast=0;fast<nums.size();fast++){
//     if(nums[fast]!=0){
//         swap(nums[slow],nums[fast]);
//         slow++;
//     }
// }





    int slow=0;
    for(int fast=0;fast<nums.size();fast++){
        if(nums[fast]!=0){
            swap(nums[slow],nums[fast]);
            slow++;
        }
    }
    
    }
};
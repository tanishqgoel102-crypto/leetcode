class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
//     vector<int> nums1;
//     vector<int> nums2;
//     for(int x:nums){
//         if(x<0){
//             nums1.push_back(x);
//         }
//         else{
//             nums2.push_back(x);
//         }
//     }
//      int pos=0;
//         int neg=0;
//     for(int i=0;i<nums.size();i++){
       
//         if(i%2==0){
//             nums[i]=nums2[pos++];
//         }
//         else{
//             nums[i]=nums1[neg++];
//         }
//     }
// return nums;


    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    int k=0;
    for(int i=0;i<pos.size();i++){
        nums[k++]=pos[i];
        nums[k++]=neg[i];
    } return nums;
    }
};
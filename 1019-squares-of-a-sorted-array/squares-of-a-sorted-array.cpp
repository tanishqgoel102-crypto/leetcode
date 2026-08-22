class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int> temp;
        // for(int i=0;i<nums.size();i++){
        //     temp.push_back(nums[i]*nums[i]);
        // }
        // sort(temp.begin(),temp.end());
        // nums=temp;
        // return nums;

       
        // vector<int> ans(nums.size());
        // int left=0;
        // int right=nums.size()-1;
        // for(int i=nums.size()-1;i>=0;i--){
        //     if(nums[left]*nums[left]<nums[ right]*nums[right]){
        //         ans[i]=nums[right]*nums[right];
        //         right--;
        //     }
        //     else{
        //     ans[i]=nums[left]*nums[left];
        //     left++;
        //     }
        // }return ans;


//         vector<int> neg;
//         vector<int> pos;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0){
//                 neg.push_back(nums[i]*nums[i]);
//             }
//             else{
//                 pos.push_back(nums[i]*nums[i]);
//             }
//         }
//         reverse(neg.begin(),neg.end());

//         int i=neg.size()-1;
//         int j=pos.size()-1;
//         int k=nums.size()-1;
//     while(k>=0){
//         if(i>=0 && j>=0){
//             if(pos[j]>neg[i]){
//                 nums[k--]=pos[j--];
//             }
//             else{
//                 nums[k--]=neg[i--];
//             }
//         }
//         else if(i>=0){
//             nums[k--]=neg[i--];
//         }
//         else{
//             nums[k--]=pos[j--];
//         }}

//    return nums;




    vector<int> ans(nums.size());
    int left=0;
    int right=nums.size()-1;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[left]*nums[left]<nums[right]*nums[right]){
            ans[i]=nums[right]*nums[right];
            right--;
        }else{
        ans[i]=nums[left]*nums[left];
        left++;}
    } return ans;
    }
};
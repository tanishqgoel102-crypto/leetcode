class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //     vector<int> ans(nums.size());
    //     vector<int> left(nums.size());
    //     vector<int> right(nums.size());
    //     left[0]=1;
    //     right[nums.size()-1]=1;
    //     for(int i=nums.size()-2;i>=0;i--){        
    //         right[i]=nums[i+1]*right[i+1];
    //     }
    //     for(int i=1;i<nums.size();i++){
    //         left[i]=left[i-1]*nums[i-1];
    //     }

    //     for(int i=0;i<nums.size();i++){
    //        ans[i]=left[i]*right[i];
    //     }

    // return ans;



    // int n=nums.size();
    // vector<int>ans(n);
    // for(int i=0;i<n;i++){
    //     int product=1;
    //     for(int j=0;j<n;j++){
    //         if(j!=i){
    //             product*=nums[j];
    //         }
    //     } ans[i]=product;
    // } return ans;


    int n=nums.size();
    vector<int>left(n);
    vector<int>right(n);
    vector<int>ans(n);
    left[0]=1;
    right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=nums[i-1]*left[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=left[i]*right[i];
    }
    return ans;
    }
};
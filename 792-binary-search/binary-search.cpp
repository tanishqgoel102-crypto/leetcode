class Solution {
public:


int binSearch(vector<int> &nums,int target,int s,int e){
    if(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<=target){
            return binSearch(nums,target,mid+1,e);
        }
        else{
            return binSearch(nums,target,s,mid-1);
        }
    }return -1;
}
    int search(vector<int>& nums, int target) {
        // int s=0;
        // int e=nums.size()-1;
        // int mid=s+(e-s)/2;
        
        // while(s<=e){
            
        //     if(target==nums[mid]){
        //        return mid;
        //     }
        //     else if(target>nums[mid]){
        //         s=mid+1;
        //     } else{
        //         e=mid-1;
        //     }
        //     mid=s+(e-s)/2;
        
        // } return -1;

        return binSearch(nums,target,0,nums.size()-1);
    }
};
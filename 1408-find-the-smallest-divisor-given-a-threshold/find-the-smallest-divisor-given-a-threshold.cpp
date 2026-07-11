class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=nums[0];
        for(int i=1;i<nums.size();i++){
            if(e<nums[i]){
                e=nums[i];
            }
        }
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=double(ceil(double(nums[i])/double(mid)));
            }
            if(sum<=threshold){
                
               e=mid;
            }
            else{
                s=mid+1;
            }
        } return s;
    }
};
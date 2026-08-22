class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    //   int low=0;
    //   int max_count=0;
    //   int zeroes=0;
    //   int count=0;
      
    //   for(int high=0;high<nums.size();high++){
    //     if(nums[high]==0){
    //         zeroes++;
            
    //     }
       
    //     while(zeroes>k){
    //         if(nums[low]==0){
    //             zeroes--;
                
    //         } low++;
    //     }
    //     count=high-low+1;
    //     max_count=max(max_count,count);
    //   } return max_count;





    int low=0;
    int count=0;
    int max_count=0;
    int zeroes=0;
    for(int high=0;high<nums.size();high++){
        if(nums[high]==0){
            zeroes++;
        }
        while(zeroes>k){
            if(nums[low]==0){
                zeroes--;
            }
            low++;
        } count=high-low+1;
        max_count=max(max_count,count);
    } return max_count;
    }
};
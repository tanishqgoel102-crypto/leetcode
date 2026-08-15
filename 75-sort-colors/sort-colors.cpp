class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int min_index=0;
    //    for(int i=0;i<nums.size();i++){
    //      min_index=i;
    //      for(int j=i+1;j<nums.size();j++){
    //         if(nums[j]<nums[min_index]){
    //             min_index=j;
    //         }
           
    //      } swap(nums[min_index],nums[i]);
    //    }
    //    int zeroes=0;
    //    int ones=0;
    //    int two=0;
    //    for(int i=0;i<nums.size();i++){
    //     if(nums[i]==0){
    //         zeroes++;
    //     }
    //     else if(nums[i]==1){
    //         ones++;
    //     }
    //     else{
    //         two++;
    //     }
    //    }
       
    //    for(int i=0;i<zeroes;i++){
    //     nums[i]=0;
    //    }
    //    for(int i=zeroes;i<zeroes+ones;i++){
    //     nums[i]=1;
    //    }
    //    for(int i=zeroes+ones;i<nums.size();i++){
    //     nums[i]=2;
    //    }


//    int low=0;
//    int mid=0;
//    int high=nums.size()-1;
//    while(mid<=high){
//     if(nums[mid]==0){
//         swap(nums[mid],nums[low]);
//         low++;
//         mid++;
//     }
//     else if(nums[mid]==2){
//         swap(nums[mid],nums[high]);
//         high--;
//     }
//     else{
//         mid++;
//     }
//    }


int low=0,mid=0,high=nums.size()-1;
while(mid<=high){
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        low++;
        mid++;
    }
    else if(nums[mid]==2){
        swap(nums[mid],nums[high]);
        high--;
    }
    else{
        mid++;
    }
}
    }
};
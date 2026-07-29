class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     if(arr[i]==0){
        //         for(int j=n-1;j>i;j--){
                    
        //             arr[j]=arr[j-1];
        //         } i++;
        //     }
        // }

//  int n=arr.size();
//  vector<int> temp(n);
//  int slow=0;
//  for(int fast=0; fast<n && slow<n;fast++){
//     temp[slow]=arr[fast];
//     slow++;
//     if(arr[fast]==0 && slow<n){
//         temp[slow]=0;
//         slow++;
//     }
//  } arr=temp;



    int n=arr.size();
    vector<int> temp(n);
    int slow=0;
    for(int fast=0;fast<n && slow<n;fast++){
        temp[slow]=arr[fast];
        slow++;
        if(arr[fast]==0 && slow<n){
            temp[slow]=0;
            slow++;
        }
    } arr=temp;
    }
};
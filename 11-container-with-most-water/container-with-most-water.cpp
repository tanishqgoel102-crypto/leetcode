class Solution {
public:
    int maxArea(vector<int>& height) {
    //     int start=0;
    //     int end=height.size()-1;
    //     int ans=0;
    //     while(start<end){
    //         int width=end-start;
    //         int h=min(height[start],height[end]);
    //        int answer=width*h;
    //        ans=max(ans,answer);
    //         if(height[start]<height[end]){
    //             start++;
    //         }
    //         else{
    //             end--;
    //         }

    //     }
    
    //    return ans;




       int start=0;
       int end=height.size()-1;
       int ans=0;
       while(start<end){
        int width=end-start;
        int h=min(height[start],height[end]);
        int answer=width*h;
        ans=max(ans,answer);
        if(height[start]<height[end]){
            start++;
        }
        else{
            end--;
        }
       } return ans;
    }
};
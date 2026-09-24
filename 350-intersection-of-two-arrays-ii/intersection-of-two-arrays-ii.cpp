class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    // unordered_set<int>st;
    // vector<int>ans;
    // if(nums1.size()>nums2.size()){
    // for(int x:nums1){
    //     st.insert(x);
    // }}
    // else{
    //       for(int x:nums2){
    //     st.insert(x);
    // }

    // }
    // if(nums2.size()<nums1.size()){
    // for(int x:nums2){
    //     if(st.find(x)!=st.end()){
    //         ans.push_back(x);
    //     }}}
    // else{
    //      for(int x:nums1){
    //     if(st.find(x)!=st.end()){
    //         ans.push_back(x);
    //     }
    // }
    // }return ans;


unordered_map<int,int>mp;
vector<int>ans;
for(int x:nums1){
    mp[x]++;
}
for(int x:nums2){
    if (mp[x] > 0){
        ans.push_back(x);
        mp[x]--;
    }
}
return ans;
    }
};
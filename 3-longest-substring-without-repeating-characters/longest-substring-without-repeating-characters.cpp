class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // tanishq
        int freq[256]={0};
        int left=0;
        int max_len=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]]++;
            
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            int len=right-left+1;
            max_len=max(len,max_len);
        } return max_len;
    }
};
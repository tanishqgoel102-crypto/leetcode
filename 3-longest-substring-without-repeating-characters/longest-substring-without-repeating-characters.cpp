class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // tanishq
        // int freq[256]={0};
        // int left=0;
        // int max_len=0;
        // for(int right=0;right<s.size();right++){
        //     freq[s[right]]++;
            
        //     while(freq[s[right]]>1){
        //         freq[s[left]]--;
        //         left++;
        //     }
        //     int len=right-left+1;
        //     max_len=max(len,max_len);
        // } return max_len;


        unordered_set<char>st;
        int low=0;
        int max_count=0;
        int count=0;
        for(int high=0;high<s.size();high++){
            while(st.find(s[high])!=st.end()){
                st.erase(s[low]);
                low++;
            }
            st.insert(s[high]);
            count=high-low+1;
            max_count=max(max_count,count);
        }return max_count;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {


        if(s.size()==0)return 0;

        set<char> st;

        st.insert(s[0]);

        int left=0, right=0,maxi=1;

        int n=s.size();

       for(right=1;right<n; right++)
       {
           while (st.count(s[right])) {
                st.erase(s[left]);   
                left++;
            }

            st.insert(s[right]);
            maxi = max(maxi, (int)st.size());
       }

       return maxi;
        
    }
};

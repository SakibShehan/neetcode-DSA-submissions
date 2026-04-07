class Solution {
public:
    bool isPalindrome(string s) {

        int l=0, r=s.size()-1;
        
        while(l<=r)
        {

            while (l < r && !isalnum(s[l])) ++l;
          
            while (l < r && !isalnum(s[r])) --r;

            if(s[l]>='a' && s[l]<='z') s[l]-=32;
            if(s[r]>='a' && s[r]<='z') s[r]-=32;

            if(s[l]==s[r])
            {
                l++,r--;
            }
            else return false;
        }
        return true;
        
    }
};

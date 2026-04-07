class Solution {
public:
    int maxArea(vector<int>& h) {
        int l,r,i,water=0;
        l=0,r=h.size()-1;

        while(l<r)
        {
            int area= min(h[l],h[r])*(r-l);

            water = max(water,area);

            if(h[l]<h[r])l++;
            else r--;
        }
        return water;
    }
};

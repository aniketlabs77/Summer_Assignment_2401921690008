class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(); 
        int ans = 0 ; 

        int l = 0 ; 
        int r = n-1 ; 

        int lmax = 0 ; 
        int rmax = 0 ; 

        while(l<=r){
            lmax = max(lmax, height[l]); 
            rmax = max(rmax, height[r]); 

            if(lmax <= rmax){
                ans = max(ans, lmax*(r-l)); 
                l++ ; 
            }
            else{
                ans = max(ans, rmax*(r-l)); 
                r-- ; 
            }
        }

        return ans ; 
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(); 

        if(n==1) return ; 

        int l = 0 ; 
        int r = 0 ; 
        bool zero = false ; 

        for(int i = 0 ; i<n ; i++){
            if(nums[i] == 0){
                l = i ; 
                zero = true ; 
                break ; 
            }
        }

        r = l + 1 ; 

        while(zero && r<n){
            if(nums[r] != 0){
                swap(nums[l], nums[r]); 
                l++ ; 
            }
            r++ ; 
        }
    }
};
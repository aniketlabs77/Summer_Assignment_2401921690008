class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0 ; 
        double avg = -1e9 ; 
        double maxAvg = -1e9 ; 

        for(int i = 0 ; i<k ; i++) sum += nums[i]; 

        avg = max(avg, sum/k); 
        maxAvg = max(maxAvg, avg); 

        int l = 0 ; 
        int r = k ; 

        while(r<nums.size()){
            sum += nums[r]; 
            sum -= nums[l]; 
            
            avg = max(avg, sum/k); 
            maxAvg = max(maxAvg, avg); 

            r++ ; 
            l++ ;
        }

        return maxAvg ; 
    }
};
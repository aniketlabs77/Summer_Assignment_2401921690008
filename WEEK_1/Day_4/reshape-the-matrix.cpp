class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(); 
        int n = mat[0].size(); 

        if(m*n != r*c) return mat ; 

        vector<vector<int>> res ; 
        vector<int> temp ; 

        for(auto row : mat){
            for(auto x : row){
                temp.push_back(x); 

                if(temp.size() == c){
                    res.push_back(temp); 
                    temp.clear() ; 
                }
            }
        }



        return res ; 
    }
};
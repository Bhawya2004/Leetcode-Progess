class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size();
        int cols=grid[0].size();
        int total_elements=rows*cols;
        k=k%total_elements;
        vector<vector<int>> res(rows,vector<int>(cols,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int element_before=(i*cols);
                int oldIndex=element_before+j;
                int newIndex=(oldIndex+k)%total_elements;
                int newRow=newIndex/cols;
                int newCol=newIndex%cols;
                res[newRow][newCol]=grid[i][j];
            }
        }
        return res;
    }
};
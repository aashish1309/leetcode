class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size(),sum=0;
        vector<int> col(n,INT_MIN);
        vector<int> row(n,INT_MIN);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(col[j]<grid[i][j])
                    col[j]=grid[i][j];
                if(row[i]<grid[i][j])
                    row[i]=grid[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=min(row[i],col[j])-grid[i][j];
            }
        }
        return sum;
    }
};
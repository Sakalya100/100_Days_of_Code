class Solution 
{
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) 
    {
        vector<vector<int>> mat(n, vector<int> (n, 0));
        int r1, c1, r2, c2;
        for(auto &it:queries)
        {
            r1=it[0], c1=it[1], r2=it[2], c2=it[3];
            for(int i=r1; i<=r2; i++) //marking each row of the query
            {
                mat[i][c1] += 1; //according to the query, we need to start adding 1 from (i, c1) cell
                if((c2+1)>=n) //for stop adding one, we need to check whether we are at last cell of the row or not
                    if(i+1<n) //if we are at last cell, we mark first cell of next row as stop adding 1
                        mat[i+1][0] -= 1;
                    else
                        continue;
                        
                
                else //if we are not at last cell, we mark next cell of the row at stop adding 1.
                    mat[i][c2+1] -= 1;      
                
            }    
        }
        
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cnt += mat[i][j];
                mat[i][j] = cnt;
            }
        }
        return mat;
    }
};

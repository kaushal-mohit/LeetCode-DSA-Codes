class Solution {
    bool checkLand(int i, int j, vector<vector<int>> &grid){
        return grid[i][j]==1;
    }

    vector<pair<int,int>> dir={{-1,0}, {0,-1}, {1,0}, {0,1}};

    bool isSubisland(int i, int j, vector<vector<int>>& grid1, vector<vector<int>>& grid2, vector<vector<bool>> &visited){
        int totalrows=grid2.size();
        int totalcols=grid2[0].size();

        visited[i][j]=true;
        bool isSub=true;
        queue<pair<int,int>> q;
        q.push({i,j});

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            if(!checkLand(r,c,grid1)){
                isSub=false;
            }

            for(auto& x:dir){
                int nr=r+x.first;
                int nc=c+x.second;

                if(nr>=0 && nc>=0 && nr<totalrows && nc<totalcols && !visited[nr][nc] && checkLand(nr, nc, grid2)){
                    q.push({nr,nc});
                    visited[nr][nc]=true;
                }
            }
        }
        return isSub;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m= grid2.size();
        int n= grid2[0].size();

        vector<vector<bool>> visited (m, vector<bool> (n,false));
        int cnt=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && checkLand(i,j,grid2) && isSubisland(i,j,grid1, grid2, visited)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
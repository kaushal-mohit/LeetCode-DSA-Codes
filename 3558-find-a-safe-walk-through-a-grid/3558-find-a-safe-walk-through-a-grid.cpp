class Solution {
    vector<pair<int,int>> dir={{0,1}, {1,0}, {-1,0}, {0,-1}};
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size();
        int n=grid[0].size();

        //quue
        priority_queue<pair<int, pair<int,int>>> pq;
        vector<vector<bool>> visited (m, vector<bool> (n,false));

        if(grid[0][0]==1) pq.push({health-1, {0,0}});
        else pq.push({health, {0,0}});
        visited[0][0]=true;

        while(!pq.empty()){
            int h=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();
            if(i==m-1 && j==n-1){
                return h>=1;
            }

            for(auto x:dir){
                int nr=i+x.first;
                int nc=j+x.second;
                if(nr>=0 && nc>=0 && nr<m && nc<n && !visited[nr][nc]){
                    pq.push({h-grid[nr][nc],{nr,nc}});
                    visited[nr][nc]=true;  
                }
                
            }
        }
        return false;
    }
};
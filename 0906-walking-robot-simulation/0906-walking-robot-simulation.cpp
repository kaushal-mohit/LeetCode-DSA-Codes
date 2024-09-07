class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        set<pair<int,int>> st;
        for(auto x:obstacles){
            st.insert({x[0], x[1]});
        }
        // vector<int> coordinates(2,0);
        int x=0, y=0;
        vector<char> dir={'N', 'E', 'S', 'W'};
        int idx=0, res=0;

        for(int i=0;i<commands.size();i++){
            int cur=commands[i];
            if(cur==-1){
                idx=(idx+1)%4;
                continue;
            }
            if(cur==-2){
                idx=(idx+3)%4;
                continue;
            }
            char cur_dir=dir[idx];

            while(cur>0){
                if(cur_dir=='N'){
                    if(st.count({x,y+1})) break;
                    y++;
                }
                if(cur_dir=='E'){
                    if(st.count({x+1,y})) break;
                    x++;
                }
                if(cur_dir=='S'){
                    if(st.count({x,y-1})) break;
                    y--;
                }
                if(cur_dir=='W'){
                    if(st.count({x-1,y})) break;
                    x--;
                }
                res=max(res, x*x+y*y);
                cur--;
            }
        }

        return res;
    }
};
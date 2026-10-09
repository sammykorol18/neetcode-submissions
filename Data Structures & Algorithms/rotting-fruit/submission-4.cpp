class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int counter=0; 
        int fresh=0;
        queue <pair<int,int>> rotten;
        for (int y=0; y<grid.size(); y++){
            for (int x = 0; x<grid[y].size(); x++){
                if (grid[y][x]==2){
                    rotten.push({y,x});
                }
                else if (grid[y][x]==1){
                    fresh++;
                }
            }
        }

        while (!(rotten.empty()) && fresh>0){
            int dx[] = {-1, 1, 0, 0};
            int dy[] = {0, 0, -1, 1};
            int size = rotten.size();
            for (int j = 0; j<size; j++){
                int y = rotten.front().first;
                int x = rotten.front().second;
                rotten.pop();
                for (int i = 0; i<4; i++){
                    int y_change = y+dy[i];
                    int x_change = x+dx[i];
                    if(y_change>=0 && y_change<grid.size() && x_change>=0 && x_change<grid[y_change].size() && grid[y_change][x_change]==1){
                        grid[y_change][x_change] = 2; 
                        fresh --; 
                        rotten.push({y_change, x_change});
                    }}
            }
            counter++;
        }
        if (fresh == 0){
            return counter;
        }
        return -1;
    }
};

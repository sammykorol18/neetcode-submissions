class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        int counter = 0;
        queue<pair <int, int>> rotten; 
        int fresh = 0;
        for (int y=0; y<grid.size(); y++){
            for (int x = 0; x<grid[y].size(); x++){
                if (grid[y][x] == 2){
                    rotten.push({y, x});
                } 
                else if (grid[y][x]==1){
                    fresh++;
                }
            }
        }
        while (fresh>0 && !(rotten.empty())){
            int dx[] = {0, 0, 1, -1};
            int dy[] = {1, -1, 0, 0};
            int size = rotten.size();
            for (int j=0; j<size; j++){
                int y_rotten = rotten.front().first;
                int x_rotten = rotten.front().second;
                rotten.pop();
                for (int i = 0; i<4; i++){
                    int x_change = x_rotten + dx[i];
                    int y_change = y_rotten + dy[i];
                    if (x_change >= 0 && x_change<grid[y_rotten].size() && y_change>= 0 &&
                    y_change<grid.size() && grid[y_change][x_change]==1){
                        grid[y_change][x_change]=2;
                        rotten.push({y_change,x_change});
                        fresh--;
                        }
                }}
            counter++;
        }
        if (fresh == 0){
            return counter;
        }
        return -1; 
        }

};

class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> treasures; 
        int lands = 0;
        for (int y = 0; y<grid.size(); y++){
            for (int x=0; x<grid[y].size(); x++){
                if (grid[y][x]==2147483647){
                    lands++;
                }
                if (grid[y][x]==0){
                    treasures.push({y,x});
                }
            }
        }
        while (lands>0 && !(treasures.empty())){
            int size = treasures.size();
            int dx [] = {1, -1, 0, 0};
            int dy [] = {0, 0, 1, -1};
            for (int i=0; i<size; i++){
                int x = treasures.front().second;
                int y = treasures.front().first;
                treasures.pop();
                for (int j=0; j<4; j++){
                    int x_change = x + dx[j];
                    int y_change = y + dy[j];
                    if (x_change>=0 && x_change<grid[y].size() && y_change>=0                     && y_change<grid.size()&&
                    grid[y_change][x_change]==2147483647) {
                        grid[y_change][x_change] = grid[y][x]+1; 
                        lands--; 
                        treasures.push({y_change, x_change});
                    }
                }
            }
        }
    }
};

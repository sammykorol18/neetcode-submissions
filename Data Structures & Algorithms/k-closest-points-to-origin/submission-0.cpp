class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<
            pair<int, vector<int>>, 
            vector<pair<int, vector<int>>>,
            greater<pair<int, vector<int>>> 
        > pq;
        vector<vector<int>> result; 
        for (int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            int distance = x*x + y*y;
            pq.push({distance, {x, y}});
        }        
        while (k>0){
            result.push_back(pq.top().second); 
            pq.pop();
            k--; 
        }
        return result;
    }
};

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int>> pq;  
        for (int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while (pq.size()>=2){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            if (x==y){
                pq.pop(); 
            }
            else{
                pq.pop();
                int new_weight = abs(x-y);
                pq.push(new_weight);
            }
        }
        if (pq.empty()){
            return 0;
        }
        return pq.top();   
    }
};

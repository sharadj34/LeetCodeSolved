struct Node {
    int time;
    bool state; 
    int x;
    int y;

    bool operator>(const Node& other) const {
        return time > other.time;
    }
};

class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int m = moveTime.size();
        int n = moveTime[0].size();
        priority_queue<Node, vector<Node>, greater<Node>> pq;
        pq.push({0, 0, 0, 0});
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        vector<vector<int>> dist(m, vector<int> (n, -1));
        dist[0][0] = 0;
        while(!pq.empty()){
            auto i =  pq.top();
            pq.pop();
            for(int j=0; j<4; j++){
                int nx = i.x+dx[j];
                int ny = i.y+dy[j];
                if(nx>=0 && ny>=0 && nx<m && ny<n){
                    int newTime = max(i.time+1+i.state, moveTime[nx][ny]+1+i.state); 
                    if(dist[nx][ny]==-1 || dist[nx][ny] > newTime){ 
                        pq.push({newTime, !i.state, nx, ny});
                        dist[nx][ny] = newTime;
                        if(nx==m-1 && ny==n-1) 
                            return newTime;
                    }
                }
            }
        }
        return -1;
    }
};
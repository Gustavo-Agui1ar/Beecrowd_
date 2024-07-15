#include <bits/stdc++.h>
 
using namespace std;
#define MAX 500

vector<vector<pair<int,int>>> graph;
int  V[MAX][3];

int  bfs(int s, int f) {
   
    queue<pair<int,int>> q;
    q.push(pair<int,int>(s,0));//index and time
    V[s][0] = 1; 
    
    while(!q.empty()) {
        
        int edge = q.front().first; 
        int time = q.front().second; 
        
        q.pop();
        
        if(edge == f)
            return time;

        for(auto n : graph[edge]) {
            if(n.second) {
                if (time % 3 == 0 && !V[n.first][(time+1)%3]) {
                    q.push(pair<int,int>(n.first, time + 1));
                    V[n.first][(time+1)%3] = 1;
                }
            }
            else {
                if (time % 3 != 0 && !V[n.first][(time+1)%3]) {
                    q.push(pair<int,int>(n.first, time + 1));
                    V[n.first][(time+1)%3] = 1;
                }
            } 
        }
    }

    return -1;
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, E, S, M;
    int v, e, i;

    cin >>  N >> E >> S >> M;

    graph.resize(N);
    memset(V, 0, sizeof V);

    while(M--) {
        cin >> v >> e >> i;
        graph[v].push_back(pair<int,int>(e,i));//edge where is an end and a multiple of 3
    }

    int resp = bfs(E, S);

    if(resp == -1)
        printf("*\n");
    else
        printf("%d\n",resp);
    return 0;
};
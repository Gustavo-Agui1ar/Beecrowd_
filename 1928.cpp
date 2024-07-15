/*#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

vector<int> cards_pos;
vector<vector<int>> graph;
int N;

int bfs(int start) {
    int visit[N];
    memset(visit, 0, sizeof(visit));
    queue<ii> q;
    q.push(ii(start, 0));
    visit[start] = 1;

    while(!q.empty()) {
    
        int pos = q.front().first;
        int dist = q.front().second;
        q.pop();

        if(cards_pos[pos] == cards_pos[start] && start != pos)
            return dist;
        for(auto w : graph[pos]) {
            if(!visit[w]) {
                q.push(ii(w, dist + 1));
                visit[w] = 1;
            }
        }
    }
    return -1;
}

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N;
    graph.resize(N);
    cards_pos.resize(N);

    rep(i, 0, N) {
        int s; cin >> s;
        cards_pos[i] = s;
    }

    rep(i, 1, N) {
        int s,e; cin >> s >> e;
        s--; e--;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    int sum = 0;
    vector<bool> V(N/2, false);
    rep(i, 0, N) {
        if(!V[cards_pos[i]]) {
            sum += bfs(i);
            V[cards_pos[i]] = true;
        }
    }
    printf("%d\n", sum);
    return 0;
};*/

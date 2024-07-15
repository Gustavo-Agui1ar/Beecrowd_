#include <bits/stdc++.h>
 
using namespace std;

#define MAX 56
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
vector<vector<int>> graph;
int v[MAX];
int sum;

void dfs(int s) {
   
    v[s] = 1;

    for(auto w : graph[s]) {
        if(!v[w]) {
            sum++;
            dfs(w);
        }
    }
    sum++;
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, start, V, E;
    int s, e;

    cin >> N;

    while(N--) {
        cin >> start; 
        cin >> V >> E;
        memset(v, 0, sizeof v);
        graph.clear();
        graph.resize(V);
        sum = -1;
        
        while(E--) {
            cin >> s >> e;
            graph[e].push_back(s);
            graph[s].push_back(e);
        }
        dfs(start);
        printf("%d\n", sum);
    }

    return 0;
};
#include <bits/stdc++.h>
 
using namespace std;

#define MAX 1001
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

int V;//qtd trees
int N;//dist vine

void init(int* v) {
    rep(i, 0, V) 
        v[i] = i;
}

int find(int x, int* v) {
    if(v[x] == x)
        return x;
    return v[x] = find(v[x], v);
}

void union_find(int x, int y, int* v) {
    int a = find(x, v);
    int b = find(y, v);
   
    if (a != b) { // Only union if they are in different sets
        if (a < b)
            v[b] = a;
        else
            v[a] = b;
    }
}

bool dist_possible(pair<int,int> t1, pair<int,int> t2) {// x and y

    int dx = abs(t1.first - t2. first);
    int dy = abs(t1.second - t2. second);

    return (dx * dx + dy * dy) <= (N * N);
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int c[MAX];
    memset(c, -1, sizeof c);
    vector<pair<int,int>> trees;
    
    cin >> V >> N;

    init(c);

    rep(i,0,V) {
        int a,b;
        cin >> a >> b;
        trees.push_back(pair<int,int>(a,b));
    }

    rep(i, 0, V){
        rep(j,i + 1, V) {
            if(dist_possible(trees[i], trees[j]))
                union_find(i, j, c);
        }
    }

    int root = find(0, c); // Find the root of the first tree
    rep(i, 1, V) {
        if (find(i, c) != root) {//if the vertex no pertence a conection, so is not a possible cross an all trees 
            puts("N");
            return 0;
        }
    }
    
    puts("S");
    return 0;
};
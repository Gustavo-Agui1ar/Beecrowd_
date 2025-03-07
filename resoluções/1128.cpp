#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

#define NIL -1

int V,E;
vector<vector<int>> graph;
vector<vector<int>> comps_strong;
int num_comp;

void tarjan(int u, int disc[], int low[],
                    stack<int>* st, bool stackMember[])
{
    // A static variable is used for simplicity, we can
    // avoid use of static variable by passing a pointer.
    static int time = 0;
 
    // Initialize discovery time and low value
    disc[u] = low[u] = ++time;
    st->push(u);
    stackMember[u] = true;
 
    // Go through all vertices adjacent to this
    vector<int>::iterator i;
    for (i = graph[u].begin(); i != graph[u].end(); ++i) {
        int v = *i; // v is current adjacent of 'u'
 
        // If v is not visited yet, then recur for it
        if(disc[v] == -1) {
            tarjan(v, disc, low, st, stackMember);
 
            // Check if the subtree rooted with 'v' has a
            // connection to one of the ancestors of 'u'
            // Case 1 (per above discussion on Disc and Low
            // value)
            low[u] = min(low[u], low[v]);
        }
 
        // Update low value of 'u' only of 'v' is still in
        // stack (i.e. it's a back edge, not cross edge).
        // Case 2 (per above discussion on Disc and Low
        // value)
        else if(stackMember[v] == true)
            low[u] = min(low[u], disc[v]);
    }
 
    // head node found, pop the stack and print an SCC
    int w = 0; // To store stack extracted vertices
    if(low[u] == disc[u]) {
        vector<int> comp;
        while (st->top() != u) {
            w = (int)st->top();
            comp.push_back(w);
            stackMember[w] = false;
            st->pop();
        }
        w = (int)st->top();
        comp.push_back(w);
        stackMember[w] = false;
        st->pop();
        comps_strong.push_back(comp);
        num_comp++;
    }
}
 
// The function to do DFS traversal. It uses SCCUtil()
void tarjanInit()
{
    int* disc = new int[V];
    int* low = new int[V];
    bool* stackMember = new bool[V];
    stack<int>* st = new stack<int>();
    num_comp = 0;
 
    // Initialize disc and low, and stackMember arrays
    for (int i = 0; i < V; i++) {
        disc[i] = NIL;
        low[i] = NIL;
        stackMember[i] = false;
    }
 
    // Call the recursive helper function to find strongly
    // connected components in DFS tree with vertex 'i'
    for (int i = 0; i < V; i++)
        if (disc[i] == NIL)
            tarjan(i, disc, low, st, stackMember);
}


int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int s,e,d;

    while(cin >> V >> E && V != 0 && E != 0) {
        graph.clear();
        comps_strong.clear();
        graph.resize(V);
        while(E--) {
            cin >> s >> e >> d;
            s--;e--;
            graph[s].push_back(e);
            if(d == 2)
                graph[e].push_back(s);
        }
        tarjanInit();
        if(num_comp == 1)
            puts("1");
        else 
            puts("0");
    }

    return 0;
};
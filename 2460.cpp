#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

#define MAX 50000
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int V[MAX];
    map<int, int> m;
    int N,r; cin >> N;

    rep(i,0,N) {
        int aux; cin >> aux;
        V[i] = aux;
    }
    cin >> r;

    while (r--)
    {
        int aux; cin >> aux;
        m[aux] = 0;
    }
    bool first = true;
    rep(i,0,N) {
        if(m.find(V[i]) == m.end()) {
            if(first) {
                printf("%d", V[i]);
                first = false;
            }
            else
                printf(" %d", V[i]);
        }
    }
    printf("\n");

    return 0;
};
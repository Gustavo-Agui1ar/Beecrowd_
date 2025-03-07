#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)

int V;

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
   
    if (a < b)
        v[b] = a;
    else
        v[a] = b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int v[26]; 
    int N, E;
    int ans;

    cin >> N;

    rep(i, 0, N) {
        cin >> V >> E;
        init(v);
        ans = 0;

        while(E--) {
            char c1, c2;
            cin >> c1 >> c2;
            union_find(c1 - 'a', c2 - 'a', v);
        }

        vector<vector<char>> components(V);
        rep(i, 0, V) {
            int root = find(i, v);// representante deste vertice(menor indice detro do componente)
            components[root].push_back(i + 'a');//organização de cada conjunto em ordem do menor elemento para o maior
        }

        printf("Case #%d:\n", i + 1);

        for(auto &comp : components) {
            if(!comp.empty()) {// caso o o conjunto exista imprime na tela
                for(char c : comp) {
                    printf("%c,", c);
                }
                printf("\n");
                ans++;
            }
        }
        printf("%d connected components\n\n", ans);
    }

    return 0;
}

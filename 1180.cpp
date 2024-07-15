#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int smaller;
    int pos = 0;
    int aux;

    cin >> N;
    cin >> smaller;

    rep(i, 1, N) {
        cin >> aux;
        if(aux < smaller) {
            smaller  = aux;
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", smaller, pos);

    return 0;
};
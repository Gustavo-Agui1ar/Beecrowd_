#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T; 

    cin >> T;
    int aux = 0;

    rep(i,0,1000) {
        if(aux == T)
            aux = 0;
        printf("N[%d] = %d\n", i, aux);
        aux++;
    }
    
    return 0;
};
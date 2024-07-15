#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)


void printV(int V[5], string str, int max) {
    rep(i,0,max) {
        cout << str << "[" << i << "]" << " = " << V[i] << endl;
    }
}

int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    int V1[5];
    int V2[5];
    int aux1 = -1;
    int aux2 = -1;

    rep(i,0,15) {
        cin >> T;
        if(T % 2 == 0) {
            aux1++;
            V1[aux1] = T;
        } else {
            aux2++;
            V2[aux2] = T;
        }
        if(aux1 == 4) {
            printV(V1,"par", 5);
            aux1 = -1;
        }
        if(aux2 == 4) {
            printV(V2,"impar", 5);
            aux2 = -1;
        }    
    }
    printV(V2,"impar", aux2+1);
    printV(V1,"par", aux1+1);
    
    return 0;
};
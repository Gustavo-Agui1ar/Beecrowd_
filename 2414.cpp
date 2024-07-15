#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int greater = 0;
    int aux;
    while(cin >> aux && aux != 0) {
        if(aux > greater)
            greater = aux;
    }

    printf("%d\n", greater);

    return 0;
};
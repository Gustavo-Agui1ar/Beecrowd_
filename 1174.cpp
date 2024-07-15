#include <bits/stdc++.h>
 
using namespace std;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
 
/*int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double N;

    rep(i,0,100) {
        cin>>N;
        if(N <= 10)
            printf("A[%d] = %.1lf\n", i, N);
    }
 
    return 0;
};*/

#include <cstdio>
typedef long long ll;

int main(){

    const ll A = 2050;

    ll t;
    scanf("%lld", &t);

    while(t--){
        ll n; 
        scanf("%lld", &n);
        if(n % A) {
            puts("-1"); 
            continue;
        }
        ll d = n / A; 
        ll res(0);
        while(d > 0) {
            res += (d % 10);
            d /= 10;
        }

        printf("%lld\n", res);
    }

}
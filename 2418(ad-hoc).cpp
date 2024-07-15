#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double sum = 0;
    double aux;
    vector<double> v;
    
    rep(i,0,5) {
        cin >> aux;
        sum += aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());
    sum -= v[0];
    sum -= v[4];

    printf("%.1lf\n",sum);

    return 0;
};
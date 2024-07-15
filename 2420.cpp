#include <bits/stdc++.h>
 
using namespace std;
 
#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
 
typedef long long ll;

int binarySearch(vector<int>v, int ans) {
    
    int l = 0;
    int r = v.size();
    int m;
    ans /=2;

    while(l <= r) {
        m = (l + r)/2;
        if(v[m] == ans)
            return ++m;
        else if(v[m] < ans)
            l = m + 1;
        else
            r = m;
    }
    return 0;
}

int main() {
    _;

    int N,aux;
    vector<int>v;

    cin >> N;

    for(int i = 0 ; i < N; i++) {
        
        cin >> aux;
        v.push_back(aux);
        if(i)
            v[i] += v[i - 1]; 
    }
    printf("%d\n", binarySearch(v,v[N-1]));

    return 0;
};
#include <bits/stdc++.h>
 
using namespace std;
 
#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

map<int,int>mp;

int main() {
    _;
    
    int N,count = 0;

    cin >> N;

    while (N)
    {
        int aux;
        cin >> aux;

        if(mp.find(aux) == mp.end()) {
            count++;
            mp[aux] = 1;
        }

        N--;
    }
    
    printf("%d\n", count);

    return 0;
};
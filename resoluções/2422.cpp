#include<bits/stdc++.h>

using namespace std;

#define _ \
 std::ios_base::sync_with_stdio(false); \
std::cin.tie();

typedef unsigned long long ull;

map<ull, int> mp;

int main() {

    int N;
    ull s;

    cin >> N;

    while(N) {
        ull aux;
        
        cin >> aux;
        mp[aux] = 1;
        N--;
    }

    cin >> s;

    map<ull, int>::iterator it = mp.begin();

    while(it != mp.end()) {
        ull aux = s - it->first;
        if(mp.find(aux) != mp.end()) {
            printf("%d %d\n", it->first, aux);
            return 0;
        }
        it++;
    }


    return 0;
}
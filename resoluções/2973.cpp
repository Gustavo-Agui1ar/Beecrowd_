#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

#define MAX 100000
#define MAX_TIME 1000000001

ull popCorn[MAX];
ull N,C,T;

bool isPossible(ull time) {

    ull eatMax = T * time;
    ull comp = 1;

    for(ull i = 0 ; i < N ; i++) {

        //is possible eat this popcorn position?
        if(eatMax >= popCorn[i])
            eatMax -= popCorn[i];
        //if no, call one more competidor to eat 
        else {
            eatMax = T * time;
            comp++;
            i--;
            //if have more competidor in group so is no possible eat popcorns with this time
            if(comp > C)
                return false;
        }
    }

    return true;
}


int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    cin >> N >> C >> T;

    //scanning array popcorn
    for(ull i = 0 ; i < N ; i++)
        cin >> popCorn[i];

    ull l = 0;
    ull r = MAX_TIME;
    ull m;

    //binary search in possible time to eat all popcorn
    while(l < r) {
        m = (l + r) / 2;
        
        if(isPossible(m))
            r = m;
        else
            l = m + 1;
    }

    cout << l << endl;

    return 0;
}